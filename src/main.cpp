#include <iostream>
using namespace std;

void header()
{
	cout << "C++ Program to read and display" << endl;

	cout << "Enter the positive interger or 9999 to quit" << endl;
}

void numberChecker()
{
	int NumberStore[25];
	int len = sizeof(NumberStore) / sizeof(NumberStore[0]);
	int exitCode = 9999;
	int totalNumRead = 0;

	for (int i = 0; i < len; i++)
	{
	Entering:
		cin >> NumberStore[i];
		if (NumberStore[i] <= 0)
		{
			cout << "Error, Try Again" << endl;
			goto Entering;
		}
		else if (NumberStore[i] == exitCode)
		{
			cout << "Exiting" << endl;

			cout << totalNumRead;
			return;
		}
		totalNumRead++;
		cout << "Enter other number or 9999 to quit" << endl;
	}
}

int main()
{
	header();
	numberChecker();
	return 0;
}
