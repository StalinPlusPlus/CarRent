#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

struct Cars
{
	int number_of_car;
	char* mark;
	float cost;
	float price_rent;
	char* type;
	bool issued;
};

struct Customers
{
	int number_of_cutomer;
	char* name;
	char* surname;
	char* patronymic;
	char* adress;
	char* phone_number;
};

struct Issued_cars
{
	int number_of_car;
	char* date_of_isuue;
	char* return_date;
};

void Autoristion()
{
	fstream file;
	string login, password, buf, file_name;

	cout << "������� �����: ";
	cin >> login;
	cout << endl << "������� ������: ";
	cin >> password;
	cout << endl;

	file_name = login + ".txt";

	if (login == "admin")
	{
		file.open("admin.txt", fstream::out | fstream::in | fstream::app);

		if (file.is_open())
		{
			getline(file, buf);

			if (buf == password)
			{
				cout << "����������� �������!";
			}
		}
		else
		{
			cout << "������ �������� �����!";
		}
	}
	else
	{
		file.open(file_name, fstream::out | fstream::in | fstream::app);

		if (!file.is_open())
		{
			cout << "������ �������� �����!";
		}
		else
		{
			getline(file, buf);

			if (buf == password)
			{
				cout << "����������� ������ �������!";
			}
			else
			{
				cout << "������ �����������! �������� ������!";
			}
		}
	}
}

void Registration()
{
	fstream file;
	string login, password;


}

void Menu()
{

}

int main()
{
	setlocale(LC_ALL, "rus");
	Cars cars;
	Customers customers;
	Issued_cars issued_cars;
	int menu_choose = 10;
	cin >> menu_choose;
	Autoristion();
}