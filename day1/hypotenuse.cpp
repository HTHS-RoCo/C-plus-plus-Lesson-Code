#include <iostream>
#include <cmath>    // Don't forget to include cmath!

int main() {
    // Declare our side length variables
    double a{};
    double b{};

    // Input the side lengths
    std::cout << "Enter the length of side a: ";
    std::cin >> a;

    std::cout << std::endl << "Enter the length of side b: ";
    std::cin >> b;
    std::cout << std::endl;

    // Calculate and print the hypotenuse
    double c = std::hypot(a, b);
    std::cout << "The hypotenuse of this triangle is " << c << " units";
    
    return 0;
}