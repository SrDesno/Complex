#include "Complex.h"
#include <iostream>

int main() {
  Complex compA(2,3), compB(1,6), compC(3,1);

  std::<<"test operator + "<<std::endl;
  compC=compA+compB;

  std::cout<<"Test more than 1 operator "<<std::endl;
  if(compA==compB){
    std::cout<<"equal"<<std::endl;
  }
}