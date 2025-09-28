//Program to convert Fahrenheit to Celsius and vice versa
#include<iostream>


using namespace std;

int main()
{
    double fahrenheit, celsius;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout<<"Temperature in Celsius: "<<celsius<<endl;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    return 0;
}