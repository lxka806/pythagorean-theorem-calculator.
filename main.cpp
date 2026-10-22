#include <iostream>
#include <cmath>

int main() {
    double c;
    double a;
    double b;

    std::cout << "Simple Pythagorean Theorem Calculator\n";

    std::cout << "Enter side A of the triangle: ";
    std::cin >> a;

    std::cout << "Enter side B of the triangle: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse (C) is: " << c << "\n";

    return 0;
}
