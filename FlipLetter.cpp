// The program flip a letter
// Flip a letter
// Programmer: Panupong Leenawarat
// Last modify: 10/8/15

#include <iostream>
using namespace std;

int main()
{
	char ch;
	int chLe;
	chLe = 'a' - 'A';

	//Title
	cout << "\t  This program reads letters and\n"
	   	 << "\tclassifies them as capital or lower\n"
		 << "\t    and then flips their case\n"
		 << "\t        by Lee. Panupong" << endl << endl;
	
	cout << "Please give me a letter: ";
	cin >> ch ;   cin.ignore(80, '\n'); //input a character
	cout << endl;

	//Determine what the user entered and loop
	while (true)
	{
		if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z'))
			cout << "\'" << ch << "\'" << " is NOT a letter.";
		else if (ch >= 'a' && ch <= 'z')
			cout << "\'" << ch << "\'" 
				 << " is lower case letter. The corresponding upper letter is " 
				 << "\'" << char(ch - chLe) << "\'.";
		else if (ch >= 'A' && ch <= 'Z')
			cout << "\'" << ch << "\'" 
				 << " is upper case letter. The corresponding lower letter is " 
				 << "\'" << char(ch + chLe) << "\'.";
			cout << endl<< endl;

	system("pause");
	system("cls");
	cout << "\nPlease give me a letter: ";
	cin >> ch;   cin.ignore(80, '\n');
	cout << endl;
	}
	return 0;
}
