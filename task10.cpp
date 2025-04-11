//Simple logic simulation

#include <iostream>
using namespace std;
int main()
{
    int username, password;
    cout << "Enter username: \n";
    cin >> username;
    cout << "Enter password: \n";
    cin >> password;
    if (username == 1234 && password == 5678)
    {
        cout << "Access Granted" << endl;
    }
    else
    {
        cout << "Access Denied" << endl;
    }
    return 0;
}