//simle calculator

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a;
    char c;
    cin >> c;
    cin >> b;
    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        switch (c)
        {
        case '+':
            cout << a << "+" << b << "=" << a + b;
            break;
        case '-':
            cout << a << "-" << b << "=" << a - b;
            break;
        case '*':
            cout << a << "*" << b << "=" << a * b;
            break;
        case '/':
        if (b!=0)
        {
            cout << a << "/" << b << "=" << a / b;
        }
        else{
            cout <<"Santax error";
        }
            break;
        }
    }
    else{
        cout<<"Your operator is invalid";
    }
    return 0;
}