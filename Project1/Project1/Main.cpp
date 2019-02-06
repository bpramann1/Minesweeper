#include <iostream>
#include "Validation.h"


using namespace std;

int numberOfRows;
int numberOfColumns;

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


