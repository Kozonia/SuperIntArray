#include "Highlander.h"
#include "SuperIntArray.h"
#include <iostream>
using namespace std;


int main()
{
	/*
	Highlander Warrior1;
	cout << Warrior1.speak() << endl;
	cout << "Warrior 1 status: " << Warrior1.status() << endl;
	Highlander Warrior2("Mr.Better-Warrior");
	cout << Warrior2.speak() << endl;
	cout << "Warrior 1 status: " << Warrior1.status() << endl;
	cout << "Warrior 2 status: " << Warrior2.status() << endl;
	*/

	int array1[] = { 1, 2, 3, 4, 0 };
	SuperIntArray myArray;
	myArray.setNums(array1);
	cout << myArray.getMax(array1, sizeof(array1)) << endl;
	myArray.add(5);
	cout << myArray.getMax(array1, sizeof(array1)) << endl;

	SuperIntArray yourArray = myArray;
	cout << yourArray.getMax(array1, sizeof(array1));


	return 0;
}