Samantha Ihm
//08 Sept 2024
//CPSC lab 1
//compoundCalc.cpp
//this program contains the function that calculates retirement savings
//10 min



#include:wq:#include <iostream>
#include <cmath>
#include "compoundCalc.h"

double compoundCalc(double p, double r, int t){
  double RS = p*pow((1+r),t);
return RS;
}
