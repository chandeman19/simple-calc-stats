#include <iostream>
#include <array>
using namespace std;

/**
 * Display the title of the Applications
 *
 **/
void header()
{
	cout << "C++ Program to read and display" << endl;
	cout << "Enter the positive interger or 9999 to quit" << endl;
}

/**
 * Perform All programs manipulations
 *
 **/
void calculateStats(int arrSize)
{
	// TODO refactor this function to only handle program functionality i.e.
	// TODO remove the display of results to another Function
	// TODO create a validate function for checking of exit code or -ve numbers
	// TODO handle exiting of Program when loop reaches end and user did not enter 9999
	int numbersRead[arrSize];
	// int len = sizeof(numbersRead) / sizeof(numbersRead[0]);
	int exitCode = 9999;
	int temp;
	int totalNumbersRead = 0;

	for (int i = 0; i < arrSize; i++)
	{
		// Entering:
		cin >> temp;
		if (temp == exitCode)
		{
			cout << "Exiting" << endl;

			int sumOfAllNumbersRead = 0;
			int totalOfPositiveNumbersRead = 0;
			// Total numbers read
			cout << totalNumbersRead << endl;
			// sum of numbers read &&
			// largest value from numbersRead &&
			// total of numbersRead greater than zero
			int largestValue = 0;
			for (int j = 0; j < totalNumbersRead; j++)
			{
				sumOfAllNumbersRead += numbersRead[j]; // sum
				// largest Value
				if (numbersRead[j] > largestValue)
				{
					largestValue = numbersRead[j];
				}

				// total of +ve numbers read
				if (numbersRead[j] > 0)
				{
					totalOfPositiveNumbersRead++;
				}
			}

			cout << sumOfAllNumbersRead << endl;

			cout << largestValue << endl;

			cout << totalOfPositiveNumbersRead << endl;

			// avarage of numbersRead
			int avg = sumOfAllNumbersRead / totalNumbersRead;
			cout << avg << endl;

			return;
		}
		else if (temp <= 0)
		{
			cout << "Error, Try Again" << endl;
			// goto Entering;
		}
		numbersRead[i] = temp;
		totalNumbersRead++;
		cout << "Enter another number or 9999 to quit" << endl;
	}
}

int main()
{
	header();
	calculateStats(5);
	return 0;
}
