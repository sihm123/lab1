//Samantha Ihm
//08 Sept 2023
//CPSC 1021 lab1
//retirementCalc.cpp
//this program calculates retirement savings based on user input
//1 hour

#include <iostream>
#include <cmath>
#include "compoundCalc.h"

using namespace std;

int main(){

        int t;
        double p,r,rSavings;

        cout<<"enter principal: ";
        cin>>p;

        cout<<"enter interest rate: ";
        cin>>r;

        cout<<"enter number of years: ";
        cin>>t;

        rSavings = compoundCalc(p,r,t);
        cout<<"Your retirement savings will be $"<<rSavings<<endl;

        return(0);
}
     
