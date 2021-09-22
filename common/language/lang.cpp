
#include <iostream>
#include "lang.hpp"

void __attribute__((weak)) say_hello()
{
  std::cout << "Hello!" << std::endl;
}

void __attribute__((weak)) say_goodbye()
{
  std::cout << "Goodbye!" << std::endl;
}
