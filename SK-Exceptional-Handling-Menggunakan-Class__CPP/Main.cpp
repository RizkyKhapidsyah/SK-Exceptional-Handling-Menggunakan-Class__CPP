#include <iostream>
#include <conio.h>
#include "Circle.h"

using namespace std;

int main() {
	double radius = 0; //To hold a radius
	Circle userCircle; //create an instance of the circle

	cout << "Enter the circle's radius: "; cin >> radius;

	try {
		userCircle.setRadius(radius);
		// Display the circle's data.
		
		cout << "Radius: " << userCircle.getRadius() << endl;
		cout << "Area : " << userCircle.getArea() << endl;
		cout << "Diameter : " << userCircle.getDiameter() << endl;
		cout << "Circumference: " << userCircle.getCircumference() << endl;
	}
	catch (Circle::NegativeRadius e) {
		cout << "Not a valid radius." << e.getRadius() << endl;
	}

	_getch();
	return 0;
}