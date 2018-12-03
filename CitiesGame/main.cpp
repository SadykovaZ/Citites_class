#include "CitiesConsole.h"
#include <Windows.h>



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	CitiesConsole c;
	c.start();
	c.game();
	/*Cities c;
	c.loadFromFile("C:\\Users\\ЧерновС\\Desktop", "city.csv");*/
	//map<string, char> m;
	//string s = "Алматы";
	//m.insert(make_pair(s, '1'));
	//int cnt = m.count("");
	//char c = 'ы';
	////c = c - 32;
	//cout << c;
	//cout << *(end(s) - 1);
	//cout << (char)toupper('ы');
	

	//cout << it->first<<" "<<it->second;
	system("pause");
}