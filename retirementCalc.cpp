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
        //variables are declared
        int t;
        double p,r,rSavings;
        //asks the user to input principle, interest rate, time
        cout<<"enter principal: ";
        cin>>p;

        cout<<"enter interest rate: ";
        cin>>r;

        cout<<"enter number of years: ";
        cin>>t;
        //calls the function given user inputs to calculate retirement savings
        rSavings = compoundCalc(p,r,t);
        //prints out retirement savings
        cout<<"Your retirement savings will be $"<<rSavings<<endl;

        return(0);
}
     
