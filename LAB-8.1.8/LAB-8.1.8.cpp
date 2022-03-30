// LAB-8.1.8.cpp
// Сушинський Ігор
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку.
// Варіант 20
// 2 завдання
// Використання стандартних функцій для рядків string

#include <iostream>
#include <string>

using namespace std;

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 2] == '-')
			s.replace(pos, 3, "**");

	return s;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	string str;

	cout << "Ввести лiтерний рядок:" << endl;
	getline(cin, str);

	string dest = Change(str);

	cout << "Модифiкований лiтерний рядок (param) : " << str << endl;
	cout << "Модифiкований лiтерний рядок (result): " << dest << endl;

	return 0;
}