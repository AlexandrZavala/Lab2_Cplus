#include <iostream>
using namespace std;
/*
Создать структуру, содержащую информацию о военнослужащем:
фамилия; имя; отчество; домашний адрес (почтовый индекс,
страна, область, район, город, улица, дом, квартира);
национальность; дата рождения (год, месяц число); должность;
звание. Определить из трех старшего по званию.
*/

enum type
{
	ryadovoi, sergant, polkovnik
};

struct military
{
	char Sname[20];
	char nam[20];
	char otc[20];
	char adr[100];
	char nac[20];
	int day, month, year;
	char dolg[25];
	type zvan;
};

void show(struct military a)
{
	cout << "FIO " << a.Sname << ' ' << a.nam << ' ' << a.otc << endl;
	cout << "Adress " << a.adr << endl;
	cout << "Birthday " << a.day << '.' << a.month << '.' << a.year << endl;
	cout << "NAtionaliti " << a.nac << endl;
	cout << "Doljnist' " << a.dolg << endl;
}

int main() {
	struct military Michael, Trevor, Franklin;
	setlocale(0, "");
	cout << "Enter FIO, Adress, Birthday ( DD ММ YYYY), NAtionaliti, Doljnist\n";
	cin >> Michael.Sname >> Michael.nam >> Michael.otc >> Michael.adr >> Michael.day >> Michael.month >> Michael.year >> Michael.dolg >> Michael.nac;
	Michael.zvan = (type)2;

	cout << "Enter FIO, Adress, Birthday ( DD ММ YYYY), NAtionaliti, Doljnist\n";
	cin >> Trevor.Sname >> Trevor.nam >> Trevor.otc >> Trevor.adr >> Trevor.day >> Trevor.month >> Trevor.year >> Trevor.dolg >> Trevor.nac;
	Trevor.zvan = (type)1;

	cout << "Enter FIO, Adress, Birthday ( DD ММ YYYY), NAtionaliti, Doljnist\n";
	cin >> Franklin.Sname >> Franklin.nam >> Franklin.otc >> Franklin.adr >> Franklin.day >> Franklin.month >> Franklin.year >> Franklin.dolg >> Franklin.nac;
	Franklin.zvan = (type)0;

	if (Michael.zvan > Trevor.zvan)
	{
		if (Michael.zvan > Franklin.zvan)
		{
			show(Michael);
		}
		else
		{
			show(Franklin);
		}
	}
	else
	{
		if (Trevor.zvan > Franklin.zvan)
		{
			show(Trevor);
		}
		else
		{
			show(Franklin);
		}
	}
	system("pause");
	return 0;
}