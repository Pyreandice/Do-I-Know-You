#include "Contact.h"

using namespace std;

Contact::Contact()
{
	int FileLines = 0;
}

// Count the number of items in the file.
int Contact::FileSize()
{
	ifstream fin;
	int i = 0;
	string throwAway;
	fin.open("FakeNames.csv");

	while (getline(fin, throwAway))
	{
		i++;
	}

	fin.close();
	FileLines = i;
	return i;
}

// Convert the file to vector format.
vector<string> Contact::VecString()
{
	vector<string> newVector;
	string currentLine;
	string notDeliminator;
	ifstream fin;
	fin.open("FakeNames.csv");

	// Parse the data.
	for (int y = 0; y <= FileLines; y++)
	{
		getline(cin, currentLine);
		istringstream s(currentLine);
		int x = 0;
		while (getline(s, notDeliminator, ','))
		{
			newVector[x][y] = notDeliminator;
			
			x++;
		}
	}
}

// Takes in the users input for the column(s) that they would like to search for.
string Contact::GetColumn()
{
	string userString;
	cout << "Please enter the given parameters to search for an individual(s)...." << endl;
	cout << "GivenName(First Name), Surname(Last Name), and City" << endl;
	getline(cin, userString);

	return userString;
}

Contact::~Contact()
{
}
