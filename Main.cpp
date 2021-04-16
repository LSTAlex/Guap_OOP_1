#include"Complex.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	//ввод комплексного числа
	Complex a;
	cout << "Пожалуйста введите действительную и мнимую части " << endl;
	a.EnterCompl();
	a.PrintCopml();

	//перевод из комплексного числа в строку
	cout << string(a);
	a.PrintCopml();

	//перевод из строки в комплексное число
	Complex a("1+2i");
	cout << "Перевод строки 1+2i в комплексное число " << endl;
	cout << a;
	//Перевод из показательной формы в алг.
	cout << "Перевод из показательной формы в алг. " << endl;
	Complex a;
	a.EnterCompl();
	a.Exponental();
	a.Alg();

	сравнение комплексных чисел
		Complex a, b;
	a.EnterCompl();
	b.EnterCompl();
	a.PrintCopml();
	b.PrintCopml();
	if (a == b)
	{
		cout << "(a == b) Ровны" << endl;
	}
	else
	{
		cout << "(a == b) Ложь" << endl;
	}
	if (a != b)
	{
		cout << "(a != b) Не ровны" << endl;
	}
	else
	{
		cout << "(a != b) Ложь" << endl;
	}
	if (a <= b)
	{
		cout << "(a <= b) Истина" << endl;
	}
	else
	{
		cout << "(a <= b) Ложь" << endl;
	}
	if (a >= b)
	{
		cout << "(a >= b) Истина" << endl;
	}
	else
	{
		cout << "(a >= b) Ложь" << endl;
	}
	if (a < b)
	{
		cout << "(a < b) Меньше" << endl;
	}
	else
	{
		cout << "(a < b) Ложь" << endl;
	}
	if (a > b)
	{
		cout << "(a > b) Больше" << endl;
	}
	else
	{
		cout << "(a > b) Ложь" << endl;
	}
	//арифметические операции
	Complex a, b;
	a.EnterCompl();
	b.EnterCompl();
	a.PrintCopml();
	b.PrintCopml();
	cout << "a + b = " << a + b;
	cout << "a - b = " << a - b;
	cout << "a / b = " << a / b;
	cout << "a * b =" << a * b;
	system("pause");
	return 0;
}