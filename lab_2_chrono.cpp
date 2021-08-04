#include <iostream>
#include <chrono>

void test_func(bool is_post_increment, int n)
{
    if (is_post_increment)
    {
        for (int i = 0; i < n; i++);
    }
    else
    {
        for (int i = 0; i < n; ++i);
    }
}

/*
what gonna be faster: ++i or i++ ???
*/

int main()
{
    auto t1 = std::chrono::high_resolution_clock::now();
    test_func(true, 1000*1000*1000);
    auto t2 = std::chrono::high_resolution_clock::now();

    auto duration_of_post_increment = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

    t1 = std::chrono::high_resolution_clock::now();
    test_func(false, 1000*1000*1000);
    t2 = std::chrono::high_resolution_clock::now();

    auto duration_of_pre_increment = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

    std::cout << "Duration of post increment = " << duration_of_post_increment << std::endl;
    std::cout << "Duration of pre increment = " << duration_of_pre_increment << std::endl;

    return 0;
}