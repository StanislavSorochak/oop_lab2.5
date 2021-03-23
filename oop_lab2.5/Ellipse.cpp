//////////////////////////////////////////////////////////////////////////////
// Ellipse.cpp
#include "Ellipse.h"
#include <iostream>
#include <math.h>

using namespace std;

void Ellipse::SetA(double value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Ellipse::SetB(double value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}

Ellipse::Ellipse(const double A, const double B)
{
	if (A > 0 && B > 0)
	{
		SetA(A);
		SetB(B);

	}
	else
	{
		SetA(0);
		SetB(0);

	}
}

Ellipse::Ellipse(const Ellipse& v)
{
	pair = v.pair;
}

Ellipse::~Ellipse(void)
{}

Ellipse& Ellipse::operator = (const Ellipse& n)
{
	pair = n.pair;
	return *this;
}

Ellipse::operator string () const
{
	return string(pair);
}

ostream& operator <<(ostream& out, const Ellipse& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Ellipse& s)
{
	cout << endl;
	cout << "pair: " << endl;
	in >> s.pair;
	return in;
}

Ellipse& Ellipse::operator ++()
{
	++pair;
	return *this;
}

Ellipse& Ellipse::operator --()
{
	--pair;
	return *this;
}

Ellipse Ellipse::operator ++(int)
{
	Ellipse s(*this);
	pair++;
	return s;
}

Ellipse Ellipse::operator --(int)
{
	Ellipse s(*this);
	pair--;
	return s;
}

double Ellipse::Square() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double S = 4 * ((3.14 * a * b + (a - b)) / (a + b));
	return S;
}
double Ellipse::Perimeter() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double P = 3.14 * a * b;
	return P;
}