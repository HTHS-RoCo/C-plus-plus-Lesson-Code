#include <iostream>
#include <string>

// define our overloads
// we simply print whatever type corresponds to the parameter
void type(int x) {
  std::cout << "int" << std::endl;
}

void type(double x) {
  std::cout << "double" << std::endl;
}

void type(std::string x) {
  std::cout << "string" << std::endl;
}

int main() {
  int x = 5;
  double y = 32.5;
  std::string z = "Who doesn't love Git?";

  // the compiler does all the work to figure out which overload to use
  type(x); // "int"
  type(y); // "double"
  type(z); // "string"

  return 0;
}