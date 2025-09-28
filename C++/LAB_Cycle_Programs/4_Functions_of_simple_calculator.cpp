// Program to demonstrate functions of a simple calculator
#include<iostream>


using namespace std;

int main()
{
    int a,b,res;
    char op;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    switch(op)
    {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if(b != 0)
                res = a / b;
            else
                cout<<"Division by zero error!"<<endl;
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }
    cout<<"Result: "<<res<<endl;
    return 0;
}