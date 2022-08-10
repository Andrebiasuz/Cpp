/**
    M02_A02 : Make a C++ class that contains a constructor to generate an initialization message and a function where the user will enter 6 integers After entering the 6 numbers, the system output will print the sum of the first and second numbers, the subtraction between the third and fourth numbers, and the multiplication between the fifth and sixth numbers entered
    @file Calculator_M02.cpp
    @author André Biasuz, EE. 
    @version 1.0 - 10/08/2022

   ****Improvements to come: Use inheritance with Calculator class for computations 
   ****Implement member function to alocate all setInputs and a new getInputs, put Inputs into array
*/

#include "M2_A02_Calculator.hpp"

Calculator_M02::Calculator_M02(string title) {
    setCalculatorTitle(title);
} 

void Calculator_M02::setInputs(int num1, int num2, int num3, int num4, int num5, int num6) {
        input1 = num1;
        input2 = num2;
        input3 = num3;
        input4 = num4;
        input5 = num5;
        input6 = num6;
}

void Calculator_M02::setCalculatorTitle(string title)
{
        calculatorTitle = title;
}

string Calculator_M02::getCalculatorTitle() 
{
    return calculatorTitle;
}

float Calculator_M02::multiply(float num1, float num2) {
    return num1*num2;
}

float Calculator_M02::sum(float num1, float num2) {
    return num1+num2;
}

float Calculator_M02::substract(float num1, float num2) {
    return num1-num2;
}

float Calculator_M02::divide(float num1, float num2) {
    return num1/num2;
};

int Calculator_M02::modulo(int num1, int num2) {
    return num1 % num2; 
} 

void Calculator_M02::getResults(){
    cout << "Results of computation: " << endl;
    cout << endl;
    cout << input1 << " + " << input2 << " = " << Calculator_M02::sum(input1,input2) << endl;
    cout << input3 << " - " << input4 << " = " << Calculator_M02::substract(input3,input4) << endl;
    cout << input5 << " * " << input6 << " = " << Calculator_M02::multiply(input5,input6) << endl;
}
