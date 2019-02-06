#include <iostream>

using namespace std;

int numberOfRows;
int numberOfColumns;
int intValidatedCin();

int main() 
{
	cout << "How many rows:";
	numberOfRows = intValidatedCin();	
	cout << numberOfRows; // For testing purposes only

	cout << "How many columns:";
	numberOfColumns = intValidatedCin();
	cout << numberOfColumns; // For testing purposes only

	return 0;
}

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
