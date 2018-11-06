#pragma once
#ifndef CONTACT_H_
#define CONTACT_H_
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Contact
{
public:
	Contact();
	~Contact();

	//// Getters
	std::string GetColumn();

private:
	//// Setters

	// Convert the file to vector format.
	vector<string> VecString();

	// Count the number of items in the file.
	int FileSize();

	// The number of lines in the file.
	int FileLines;
};
#endif CONTACT_H_
