#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        if(i == 0 or i == 1)
        {
            arr[i] = 1;
            continue;
        }
        arr[i] = arr[i-1] + arr[i-2];
    }
    std::cout << arr[n-1] << std::endl;

    return 0;
}