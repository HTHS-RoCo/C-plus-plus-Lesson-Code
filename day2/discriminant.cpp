#include <iostream>

// create our template
template <typename T>
T discriminant(T a, T b, T c) {
    return b * b - 4 * a * c;   // we don't necessarily need cmath, normal math operators are just fine
}

int main() {
    // test our template function
    std::cout << discriminant(1, 2, 3) << std::endl; // -8
    std::cout << discriminant(1.2, 3.4, 5.6) << std::endl; // -15.32

    return 0;
}