
#include "common/phrases/phrases.hpp"

#include <iostream>

int main(int argc, char** argv)
{
  std::cout << "\nTesting some linker fun: \n\n";
  
  std::cout << "Calling salute: ";
  salute();

  std::cout << "Calling farewell: ";
  farewell();

  return 0;
}
