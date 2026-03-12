// Highway vs Town : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
 
	int tankSize = 20;
	double Townmpg = 23.5;
	double Highwaympg = 28.9;

	double distanceTown = tankSize * Townmpg;
	double distanceHighway = tankSize * Highwaympg;
	
	cout << "Distance in Town: " << distanceTown << "miles" << endl;
	cout << "Distance on Highway: " << distanceHighway << "miles" << endl;

	
	return 0;
}

