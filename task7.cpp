//grading system

#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter your percentage: \n";
    cin >> percentage;
    if (percentage >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Grade B" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade C" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }
    return 0;
}