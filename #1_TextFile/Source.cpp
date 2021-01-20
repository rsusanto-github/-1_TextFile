#include <iostream>
#include <fstream>
using namespace std;

//#define VERSION_ONE
//#define VERSION_TWO
//#define VERSION_THREE
//#define VERSION_FOUR
#define VERSION_FIVE

int main()
{
#ifdef VERSION_ONE

	int n1 = 3;
	int n2 = 10;

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	ifstream inFile;
	inFile.open("test.txt");

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

	return 0;
#endif

	//OUTPUT: The Program ran normally with output of n1 = 3 and n2 = 10.

#ifdef VERSION_TWO

	int n1 = 3;
	int n2 = 10;

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	ifstream inFile;
	inFile.open("abc.txt");

	if (!inFile) {
		cout << "File did not open correctly, exiting." << endl;
		system("pause");
		return 1;
	}

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

	return 0;
#endif

	//OUTPUT: Error message was displayed.
#ifdef VERSION_THREE

	int n1 = 3;
	int n2 = 10;

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	ifstream inFile;
	inFile.open("abcd.txt");

	if (!inFile) {
		cout << "File did not open correctly, exiting." << endl;
		system("pause");
		return 1;
	}

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

	return 0;
#endif
	
	//OUTPUT: Error message was displayed.

#ifdef VERSION_FOUR

	int n1 = 12345;
	float n2 = 88.9922;

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	ifstream inFile;
	inFile.open("test.txt");

	if (!inFile) {
		cout << "File did not open correctly, exiting." << endl;
		system("pause");
		return 1;
	}

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

	return 0;
#endif

	//OUTPUT:new value of n1 and n2 were displayed on the output screen and updated in the text file.

#ifdef VERSION_FIVE

	int n1 = 123456789;
	float n2 = 96.75;

	ifstream inFile;
	inFile.open("test.txt");

	if (!inFile) {
		cout << "File did not open correctly, exiting." << endl;
		system("pause");
		return 1;
	}

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl; 

	return 0;
#endif

	//OUTPUT: Program did not insert the new value.
}