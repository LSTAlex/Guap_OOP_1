#pragma once
#include"Complex.h"
void Complex::PrintCopml()
{
	if (y >= 0)
	{
		cout << x << "+" << y << "i\n";
	}
	else
	{
		cout << x << "-" << y << "i\n";
	}
}

void Complex::EnterCompl()
{
	cin >> x;
	cin >> y;
}

void Complex::Exponental()
{
	fi = (atan(y / x) * (180 / M_PI)); // в градусах
	r = sqrt(x * x + y * y);
	cout << r << "*" << "e^*i" << fi << endl;
}

void Complex::Alg()
{
	fi = (atan(y / x) * (180 / M_PI)); // в градусах
	r = sqrt(x * x + y * y);
	double re = 0, im = 0;
	re = r * sin(fi);
	im = r * cos(fi);
	im > 0 ? cout << re << "+" << im << "i" << endl : cout << re << "-" << im << "i" << endl;
}

Complex::operator string() const
{
	string str = to_string(x);
	if (y >= 0)
	{
		str += " + ";
	}
	str += to_string(y) += "i\n";
	return str;
}

Complex Complex::operator+(Complex& b)
{
	Complex temp;
	temp.x = x + b.x;
	temp.y = y + b.y;
	return temp;
}

Complex Complex::operator-(Complex& b)
{
	Complex temp;
	temp.x = x - b.x;
	temp.y = y - b.y;
	return temp;
}

Complex Complex::operator*(Complex& b)
{
	Complex temp;
	temp.x = (x * b.x) - (y * b.y);
	temp.y = (x * b.y) + (b.x * y);
	return temp;
}

Complex Complex::operator/(Complex& b)
{
	Complex temp;
	temp.x = (x * b.x + y * b.y) / (b.x * b.x + b.y * b.y);
	temp.y = (b.x * y - x * b.y) / (b.x * b.x + b.y * b.y);
	return temp;
}

ostream& operator << (ostream& os, const Complex& other)
{
	if (other.y < 0)
	{
		os << other.x << "-" << other.y << "i\n";
	}
	else
	{
		os << other.x << "+" << other.y << "i\n";
	}
	return os;
}

bool operator == (const Complex& other1, const Complex& other2)
{
	return (other1.x == other2.x) && (other1.y == other2.y);
}

bool operator != (const Complex& other1, const Complex& other2)
{
	return (other1.x != other2.x) && (other1.y != other2.y);
}

bool operator <= (const Complex& other1, const Complex& other2)
{
	return (other1.x <= other2.x) && (other1.y <= other2.y);
}
bool operator >= (const Complex& other1, const Complex& other2)
{
	return (other1.x >= other2.x) && (other1.y >= other2.y);
}

bool operator > (const Complex& other1, const Complex& other2)
{
	return (other1.x > other2.x) && (other1.y > other2.y);
}

bool operator < (const Complex& other1, const Complex& other2)
{
	return (other1.x < other2.x) && (other1.y < other2.y);
}

Complex::Complex()
{
}

Complex::~Complex()
{
}