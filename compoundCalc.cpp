//Samantha Ihm
//08 Sept 2024
//CPSC lab 1
//compoundCalc.cpp
//this program contains the function that calculates retirement savings
//10 min



#include <iostream>
#include <cmath>
#include "compoundCalc.h"
//function is defined
double compoundCalc(double p, double r, int t){
  //calculation for retirement savings
  double RS = p*pow((1+r),t);
return RS;
}
