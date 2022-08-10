/*
    Refer to .cpp file  for full documentation
*/
#include <iostream>
#include <string>
using namespace std;


class Calculator_M02
{

    public:

    Calculator_M02(string title);
    void setCalculatorTitle(string title);
    string getCalculatorTitle();
    float multiply(float num1, float num2);
    float sum(float num1, float num2) ;
    float substract(float num1, float num2);
    float divide(float num1, float num2) ;
    int modulo(int num1, int num2);
    void setInputs(int num1, int num2, int num3, int num4, int num5, int num6);
    void getResults();


    private:
        int input1, input2,input3, input4, input5,input6;
        string calculatorTitle;
};
