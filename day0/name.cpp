#include <iostream>
#include <string>

using std::cin;

int main() {
    // std::endl not necessarily required here
    std::cout << "Please enter your name: ";

    // assign our name value to a name variable
    std::string name;
    cin >> name;

    // print our output!
    std::cout << "My name is " << name << " and I love C++" << std::endl;

    return 0;
}