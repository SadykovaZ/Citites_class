#include "Cities.h"




void Cities::loadFromFile(string dir, string fileName)
{
	cities.insert(make_pair("text",'1'));
	fstream file(dir + "\\" + fileName,ios::in);
	if (!file)
		throw exception("���� �� ������!");
	while (!file.eof()) {
		string s;
		getline(file, s);
		if (s.length() > 0) {
			//"11359";"11060";"11354";"����"
			//replace(begin(s), end(s), '\"', '\0');
			s = s.substr(s.rfind(';') + 2);
			s.erase(end(s) - 1);
			cities.insert(make_pair(s, '0'));
		}
		
	}
	/*for (auto&i : cities)
			cout << i.first << endl;*/
	//cout << cities.size();
}

void Cities::setCurLetter(char l)
{
	this->currentLetter = l;
}

char Cities::getCurLetter() const
{
	return this->currentLetter;
}

void Cities::search(string city)
{
	if (cities.count(city) == 0)
		throw exception("����� �� ������!");
	if (cities[city] == '1')
		throw exception("����� ��� ���!");
	if (city[0] != currentLetter)
		throw exception("����� �� ���������!");
	//������ ��� ���������
	cities[city] = '1';
	char ch = city[city.size() - 1];
	if(ch=='�'|| ch == '�'|| ch == '�')
		currentLetter = city[city.size()-2]-32;
	else
		currentLetter = city[city.size() - 1] - 32;
}
