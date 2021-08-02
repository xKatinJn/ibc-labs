#include <iostream>
#include <cmath>

int get_discriminant(int b, int a, int c)
{
    return pow(b, 2) - (-4)*(a*c);
}

void show_roots(int discriminant, int a, int b)
{
    double first_root, second_root;
    first_root = (-b + sqrt(discriminant)) / (2*a);
    second_root = (-b - sqrt(discriminant)) / (2*a);
    std::cout << "First root: " << first_root << " Second root: " << second_root;
}

int main()
{
    int a, b, c, discriminant;

    std::cin >> a >> b >> c;
    discriminant = get_discriminant(a, b, c);
    std::cout << discriminant << std::endl;
    if (discriminant >= 0) show_roots(discriminant, a, b);
    else std::cout << "There is no roots";

    return 0;
}
