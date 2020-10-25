#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << " 'R':"; cin >> R;
	cout << endl;
	;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (((y >= (sqrt((R * R) - (x + R) * (x + R))) - R) && x <= 0 && y <= 0) || (y <= sqrt((2 * x * R) - (x * x))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = (4.0 * R) * rand() / RAND_MAX - 2.0 * R;
		y = (4.0 * R) * rand() / RAND_MAX - 2.0 * R;
			if (((y >= (sqrt((R * R) - (x + R) * (x + R))) - R) && x <= 0 && y <= 0) || (y <= sqrt((2 * x * R) - (x * x))))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
