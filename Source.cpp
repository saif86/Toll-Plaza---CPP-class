#include<iostream>
#include<conio.h>

using namespace std;

class TollPlaza {
	int total_no_of_cars;
	double money;
public:
	TollPlaza(int = 0, double = 0.0);
	void payingCar();
	void nopayCar();
	void display()const;
};
TollPlaza::TollPlaza(int aTotalNoOfCars, double aMoney):total_no_of_cars(aTotalNoOfCars), money(aMoney) { }

void TollPlaza::payingCar() {
	total_no_of_cars++;
	money += 30;
}
void TollPlaza::nopayCar() {
	total_no_of_cars++;
}
void TollPlaza::display()const {
	cout << "Total cars: " << total_no_of_cars << endl;
	cout << "Total cash collected: " << money << endl;
}

void main() {
	TollPlaza tp1;
	char ch;
	while (!_kbhit()) {
		ch = _getch();
		if (ch == 'E' || ch == 'e')
			break;
		switch (ch)
		{
		case 'C':
		case 'c':
			tp1.payingCar();
			break;
		case 'N':
		case 'n':
			tp1.nopayCar();
			break;
		case 'T':
		case 't':
			tp1.display();
			break;
		}
	}
	system("pause");
}