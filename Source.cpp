/**
* @file Source.cpp
*
* @brief C++ Program to demostrate TollPlaza class.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <conio.h>
using namespace std;

// TollPlaza class definition
class TollPlaza {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	TollPlaza(int = 0, double = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// TollPlaza(const TollPlaza&);
	// TollPlaza& operator=(const TollPlaza&);
	// ~TollPlaza();

// OPERATIONS
	/** function that adds paying car.
	*
	* @param void
	*
	* @return void
	*/
	void AddPayingCar();

	/** function that adds not paying car.
	*
	* @param void
	*
	* @return void
	*/
	void AddNoPayCar();
	
	/** function that displays total cars and collected cash.
	*
	* @param void
	*
	* @return void
	*/
	void Display()const;

// ACCESS
	// setters
	void SetTotalNoOfCars(int = 0);
	void SetMoney(double = 0.0);
	void SetTollPlaza(int = 0, double = 0.0);
	/**
	# @overload void SetTollPlaza(const TollPlaza& aTollPlaza);
	*/
	void SetTollPlaza(const TollPlaza& aTollPlaza);

	// getters
	int GetTotalNoOfCars() const;
	double GetMoney() const;
	const TollPlaza& GetTollPlaza()const;

private:

// DATA MEMBERS
	int mTotalNoOfCars;
	double mMoney;
};
// end class TollPlaza

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// IceCreamCone Default+Overloaded Constructor
TollPlaza::TollPlaza(int aTotalNoOfCars, double aMoney) : mTotalNoOfCars(aTotalNoOfCars), mMoney(aMoney) {
	this->SetTollPlaza(aTotalNoOfCars, aMoney);
}
// end TollPlaza constructor 

//============================= OPERATIONS ===================================
// function that adds paying car.
void TollPlaza::AddPayingCar() {
	this->mTotalNoOfCars++;
	this->mMoney += 30;
}
// end function AddPayingCar

// function that adds not paying car.
void TollPlaza::AddNoPayCar() {
	++this->mTotalNoOfCars;
}
// end function AddNoPayCar

// function that displays total cars and collected cash.
void TollPlaza::Display()const {
	cout << "Total cars: " << this->GetTotalNoOfCars() << endl;
	cout << "Total cash collected: " << this->GetMoney() << endl;
}
// end function Display

//============================= ACESS      ===================================

// function that sets total no. of cars
void TollPlaza::SetTotalNoOfCars(int aTotalNoOfCars) {
	if (aTotalNoOfCars < 0)
		cout << "Error: Incorrect number of cars." << endl;
	else
		this->mTotalNoOfCars = aTotalNoOfCars;
}
// end function SetTotalNoOfCars

// function that sets money of TollPlaza
void TollPlaza::SetMoney(double aMoney) {
	if (aMoney < 0.0)
		cout << "Error: Money can't be negative." << endl;
	else
		this->mMoney = aMoney;
}
// end function SetMoney

// function that sets TollPlaza
void TollPlaza::SetTollPlaza(int aTotalNoOfCars, double aMoney) {
	this->SetTotalNoOfCars(aTotalNoOfCars);
	this->SetMoney(aMoney);
}
// end function SetTollPlaza

// overloaded function that sets the TollPlaza
void TollPlaza::SetTollPlaza(const TollPlaza &obj) {
	this->SetTollPlaza(obj.GetTotalNoOfCars(), obj.GetMoney());
}
// end function SetTollPlaza

// function that gets total no. of cars
int TollPlaza::GetTotalNoOfCars() const {
	return this->mTotalNoOfCars;
}
// end function GetTotalNoOfCars

// function that gets money of TollPlaza
double TollPlaza::GetMoney() const {
	return this->mMoney;
}
// end function GetMoney

// function that gets the TollPlaza
const TollPlaza& TollPlaza::GetTollPlaza()const {
	return *this;
}
// end function GetTollPlaza

/////////////////////////////// MAIN   ///////////////////////////////////////

// function main begins program execution
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
			tp1.AddPayingCar();
			break;
		case 'N':
		case 'n':
			tp1.AddNoPayCar();
			break;
		case 'T':
		case 't':
			tp1.Display();
			break;
		}
	}
	system("pause");
}
// end main
