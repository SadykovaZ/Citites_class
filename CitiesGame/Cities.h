#pragma once
#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Cities
{
	map<string, char> cities;
	char currentLetter='À';
public:
	void loadFromFile(string dir, string fileName);
	void setCurLetter(char l);
	char getCurLetter()const;
	void search(string city);


	
};

