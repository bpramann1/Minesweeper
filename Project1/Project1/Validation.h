#pragma once
#include <iostream>


using namespace std;

int intValidatedCin()
{
	int returnInt;
	while (true)
	{
		if (cin >> returnInt)
		{
			return returnInt;
		}
		else
		{
			cout << "Enter a number!" << endl;
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail()); // Author: oldrinb // Location: https://stackoverflow.com/questions/12242078/counting-the-number-of-characters-in-standard-input-after-a-cin-has-been-execute
		}
	}
	return -1;
}