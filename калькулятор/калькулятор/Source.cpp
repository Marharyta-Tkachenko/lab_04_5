#include <iostream>
#include <cmath>

using namespace std;

double a, b, c;
char x;

int main()
{
    int choice = 1;
    while (choice == 1) {
        cout << "Put your two numbers: ";
        a, b;
        cin >> a >> b;

        cout << "Put your sign (+,-,*,/): ";
        cin >> x;

        if (x == '+')
            c = a + b;
        else if (x == '-')
            c = a - b;
        else if (x == '*')
            c = a * b;
        else if (x == '/')
            c = a / b;

        cout << "Result = " << c << endl;

        cout << "Continue (f), or exit (e): ";
        cin >> choice;
    }
}