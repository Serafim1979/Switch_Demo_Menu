#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////
void show_menu();
/////////////////////////////////////////////
int main()
{
	show_menu();
	char ch;
	cin >> ch;
	while (ch)
	{
		switch (ch)
		{
		case 'c': cout << "Your choise - c!" << endl;
			break;
		case 'p': cout << "Your choise - p!" << endl;
			break;
		case 't': cout << "Your choise - t!" << endl;
			break;
		case 'g': cout << "Your choise - g!" << endl;
			break;
		case '\n': case ' ':
			break;
		default: cout << "That's not a choise!\nPlease enter a c, p, t, or g: ";
			break;
		}
		show_menu();
		cin >> ch;
	}

	system("pause");
	return 0;
}
//////////////////////////////////////////////
void show_menu()
{
	cout << "Please enter one of the following choices:\n"
		<< "c) carnivore         p) pianist\n"
		<< "t) tree              g) game \n";
}
//////////////////////////////////////////////