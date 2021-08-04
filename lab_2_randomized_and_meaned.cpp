#include <iostream>
#include <stdlib.h>
#include <time.h>

int get_mean_of_array(int *p, int n)
{
    int mean_value = 0;
    for (int i = 0; i < n; ++i)
    {
        mean_value += *(p+i);
    }
    mean_value /= n;

    return mean_value;
}

int * get_arr_with_random_values(int n)
{
    static int arr[] = {};

    srand(time(0));

    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand();
    }

    return arr;
}

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << *(arr + i) << std::endl;
    }
}

int main()
{
    int *arr;
    int n;
    std::cin >> n;

    arr = get_arr_with_random_values(n);

    print_array(arr, n);
    std::cout << "mean value = " << get_mean_of_array(arr, 3);

    return 0;
}