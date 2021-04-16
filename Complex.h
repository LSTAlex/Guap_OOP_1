#include <iostream>
#include <cmath>
#include<sstream>
const double M_PI = 3.141592653589793; // объявление константы
using namespace std;
class Complex
{
private:
	double x = 0, y = 0, fi = 0, r = 0;
public:
	// конструкторы
	Complex();
	Complex(double r)
	{
		x = r;
		y = 0;
	}
	Complex(double _x, double _y)
	{
		x = _x;
		y = _y;
	}
	Complex(string str)
	{
		stringstream iss(str);
		double _x, _y;
		char op;
		iss >> _x >> op >> _y;
		x = _x;
		y = _y;
		if (op == '-') _y = -_y;
	}
	//деструктор
	~Complex();
	void EnterCompl(); // ввод комплексного числа
	void PrintCopml(); // печать комплексного числа
	void Exponental(); // перевод из алг формы в показ.
	void Alg(); // перевод из показ в алг форму
	operator string() const;
	// перегрузка операторов
	friend bool operator == (const Complex& other1, const Complex& other2);
	friend bool operator != (const Complex& other1, const Complex& other2);
	friend bool operator <= (const Complex& other1, const Complex& other2);
	friend bool operator >= (const Complex& other1, const Complex& other2);
	friend bool operator > (const Complex& other1, const Complex& other2);
	friend bool operator < (const Complex& other1, const Complex& other2);
	friend ostream& operator << (ostream& os, const Complex& other);
	//арифметические операции
	Complex operator+(Complex& b); // перегрузка сложения
	Complex operator-(Complex& b); // перегрузка вычитания
	Complex operator*(Complex& b); //перегрузка умножения
	Complex operator/(Complex& b); //перегрузка умножения
};