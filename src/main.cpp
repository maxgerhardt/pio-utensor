#include <mbed.h>

#include "tensor.hpp"
#include "MatrixOps.hpp"
#include "MathOps.hpp"

RamTensor<int> myTensor({1});

int main() {

  myTensor.setName("my tensor");
  printf("tensor name: %s\n", myTensor.getName().c_str());

  // put your setup code here, to run once:
  int n=0;

  while(1) {
    // put your main code here, to run repeatedly:
    printf("\n HELLO uTensor :) >>>> %d\n", n++);
  }
}
