#include <iostream>

using namespace std;

float pi = 3.14;

float circular_area(float r){
	return pi*r*r;
}


int main()
{	
	float area, radius;

	radius = 1;
	area = circular_area(1);

	cout << "(radius, Area): " << "(" << radius << ',' << area << ") \n";
	cout << "Computed with pi= " << pi << endl;
	
	string r = "goodbye!";
	cout << r;
	
	return 0;
}

