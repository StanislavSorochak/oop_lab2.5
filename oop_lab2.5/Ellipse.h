//////////////////////////////////////////////////////////////////////////////
// Ellipse.h
#pragma once
#include "Pair.h"

class Ellipse
{
private:
	Pair pair;

public:
	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }


	void SetA(double value);
	void SetB(double value);

	Ellipse(const double a = 0, const double b = 0);
	Ellipse(const Ellipse& s);
	~Ellipse(void);

	Ellipse& operator = (const Ellipse& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Ellipse& s);
	friend istream& operator >> (istream& in, Ellipse& s);

	Ellipse& operator ++ ();
	Ellipse& operator -- ();
	Ellipse operator ++ (int);
	Ellipse operator -- (int);

	double Square() const;
	double Perimeter() const;

};