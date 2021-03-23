//////////////////////////////////////////////////////////////////////////////
// Pair.cpp
#include "Pair.h"

Pair::Pair()
	: a(0), b(0)
{}

Pair::Pair(const double A, const double B)
	: a(A), b(B)
{}

Pair::Pair(const Pair& v)
	: a(v.a), b(v.b)
{}

Pair::~Pair(void)
{}

Pair& Pair::operator = (const Pair& n)
{
	a = n.a;
	b = n.b;
	return *this;
}

Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Pair& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Pair& s)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	s.SetA(a);
	s.SetB(b);
	return in;
}

Pair& Pair::operator --()
{
	--a;
	return *this;
}

Pair& Pair::operator ++()
{
	++a;
	return *this;
}

Pair Pair::operator --(int)
{
	Pair a(*this);
	b--;
	return a;
}

Pair Pair::operator ++(int)
{
	Pair a(*this);
	b++;
	return a;
}



double Pair::Dobutok()
{
	return a * b;
}