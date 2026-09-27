// Lab_03_4.cpp
// Кучальська Власта
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double x, y, R1, R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	if ((pow(x, 2) + pow(y, 2) <= pow(R2, 2) && x <= 0 && y >= 0) || (pow(x, 2) + pow(y, 2) >= pow(R2, 2) && pow(x, 2) + pow(y, 2) <= pow(R1, 2) && x >= 0 && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
