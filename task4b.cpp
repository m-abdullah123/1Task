//swap two numbers without 3rd variable

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first numbers: \n";
    cin>> a;
    cout<<"Enter second numbers: \n";
    cin>> b;
    cout<<"Before swapping: \n";
    cout<<"a = "<< a << endl;
    cout<<"b = "<< b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping: \n";
    cout<<"a = "<< a << endl;
    cout<<"b = "<< b << endl;
    return 0;
}