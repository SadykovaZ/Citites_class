#include "CitiesConsole.h"
#include <Windows.h>



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	CitiesConsole c;
	c.start();
	c.game();
	/*Cities c;
	c.loadFromFile("C:\\Users\\�������\\Desktop", "city.csv");*/
	//map<string, char> m;
	//string s = "������";
	//m.insert(make_pair(s, '1'));
	//int cnt = m.count("");
	//char c = '�';
	////c = c - 32;
	//cout << c;
	//cout << *(end(s) - 1);
	//cout << (char)toupper('�');
	

	//cout << it->first<<" "<<it->second;
	system("pause");
}