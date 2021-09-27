
#include <iostream>
#include "lang.hpp"

void __attribute__((weak)) say_hello()
{
  std::cout << "Default say hello" << std::endl;
}

void __attribute__((weak)) say_goodbye()
{
  std::cout << "Default goodbye" << std::endl;
}
