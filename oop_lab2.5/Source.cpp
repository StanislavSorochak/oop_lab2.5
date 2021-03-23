//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "Ellipse.h"

int main()
{
	Pair pair(12.3, 0.5);
	cout << "a=12.3; b=0.5" << endl;
	cout << "Dobutok = " << pair.Dobutok() << endl;

	Pair M;
	cin >> M;
	cout << M << endl;

	Pair N = M;
	cout << N << endl;


	double A = 0.0;
	double B = 0.0;


	Ellipse T(3, 4);
	cout << "a=3; b=4" << endl;
	cout << "Square = " << T.Square() << endl;

	double P = T.Perimeter();
	cout << "Perimeter = " << P << endl;
}