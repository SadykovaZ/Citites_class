#include "CitiesConsole.h"




void CitiesConsole::start()
{
	try {
		c.loadFromFile("C:\\Users\\Жанара\\Desktop", "city.csv");
	}
	catch (exception&e) {
		cout << e.what();
		cout << "\nНевозможно продолжить играть\n";
		system("pause");
		exit(0);
	}
}
void CitiesConsole::game()
{
	int player = 1;
	while (1) {
		try {
			cout << "Ходит " << player << " игрок\n";
			cout << "Город на букву " << c.getCurLetter()<<endl;
			string s;
			getline(cin, s);
			c.search(s);
			player++;
			if (player == 3) player = 1;
		}
		catch (exception&e) {
			cout << e.what();
			system("pause");
		}
		system("cls");
	}
}
