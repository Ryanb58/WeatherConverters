#include <iostream>

using namespace std;

int main()
{
    float fahrenheit;
    float celsius;
    float magicNumber = (5.0/9.0);

    cout<<"Fahrenheit to Celsius Converter"<<endl;
    cout<<"Please input the temp(F):"<<endl;
    cin>>fahrenheit;
    //Remove the Enter from the input.
    cin.ignore();
    cout<<"Fahrenheit: "<< fahrenheit <<endl;

    //Fahrenheit to Celsius algorithm.
    celsius = (fahrenheit - 32) * magicNumber;

    //Print out results and pause the process.
    cout<<"Celsius: "<< celsius << endl;
    //cin.get();

    return 0;
}
