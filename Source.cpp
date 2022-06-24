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

}

int main()
{
	setlocale(LC_ALL, "rus");
	Cars cars;
	Customers customers;
	Issued_cars issued_cars;
	int menu_choose = 10;



	while (menu_choose != 0)
	{
		cout << " ";
	}
}