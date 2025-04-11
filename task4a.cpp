//swap two numbers with 3rd variable

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first numbers: \n";
    cin>> a;
    cout<<"Enter second numbers: \n";
    cin>> b;
    cout<<"Before swapping: \n";
    cout<<"a = "<< a << endl;
    cout<<"b = "<< b << endl;
    c = a;
    a = b;
    b = c;
    cout<<"After swapping: \n";
    cout<<"a = "<< a << endl;
    cout<<"b = "<< b << endl;
    return 0;
}