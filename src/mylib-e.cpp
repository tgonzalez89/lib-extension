#include "mylib-e.h"
#include <iostream>

int mylib::sub(const int a, const int b) {
  const auto result = a - b;
  std::cout << "From lib-extension: " << a << " - " << b << " = " << result << '\n';
  return result;
}

int mylib::mul(const int a, const int b) {
  const auto result = a * b;
  std::cout << "From lib-extension: " << a << " * " << b << " = " << result << '\n';
  return result;
}

int mylib::div(const int a, const int b) {
  const auto result = a / b;
  std::cout << "From lib-extension: " << a << " / " << b << " = " << result << '\n';
  return result;
}
