#include <iostream>
#include <vector>

static std::vector<int> vector_with_fibonacci;
static int iteration = 0;

void recursive_fibonacci(int iteration, int n)
{
    if (n == 0)
    {
        vector_with_fibonacci.push_back(1);
        vector_with_fibonacci.push_back(1);
        return;
    }
    if (iteration - 1 == n) return;
    if (iteration == 0 or iteration == 1)
        vector_with_fibonacci.push_back(1);
    else
        vector_with_fibonacci.push_back(vector_with_fibonacci[iteration-1] + vector_with_fibonacci[iteration-2]);
    ++iteration;
    recursive_fibonacci(iteration, n);


}

int main()
{
    int n;
    std::cin >> n;
    recursive_fibonacci(iteration, n);

    std::cout << vector_with_fibonacci[n-1] << std::endl;

    return 0;
}