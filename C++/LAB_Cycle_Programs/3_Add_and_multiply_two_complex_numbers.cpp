//Program to add and multiply two complex numbers
#include<iostream>


using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the first complex number (a+ib): ";
    cin>>x1>>y1;
    cout<<"Enter the second complex number (c+id): ";
    cin>>x2>>y2;
    x3=x1+x2;
    y3=y1+y2;
    cout<<"Sum = "<<x3<<" + "<<y3<<"i"<<endl;
    cout<<"Product = "<<(x1*x2 - y1*y2)<<" + "<<(x1*y2 + x2*y1)<<"i"<<endl;
    return 0;
}