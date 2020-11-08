// Ткаченко Маргарта Валеріївна
// калькулятор з циклами

#include <iostream>
#include <cmath>

using namespace std;

float a, b, c;
char x;

{
	if (x == "+")
	{
		c = a + b;
	}
	if (x == "-")
	{
		c = a - b;
	}
	if (x == "*")
	{
		c = a * b;
	}
	if (x == "/")
	{
		c = a / b;
	}
}

int main()
{
	int choice = 1;
	while (choice == 1) {
		cout << "Your two numbers: \n\n";
		a, b;
		cin >> a >> b;

		cout << "\n your sign (+,-,*,/):";
		x;
		cin >> x;

		float result;
		result = (a, b, x);
		cout << "\n result=" << result;
		cout << "\n\n\n continue (1), or exit (2):";
		cin >> choice;
	}
}