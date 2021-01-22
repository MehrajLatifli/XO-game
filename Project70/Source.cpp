#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
// X O oyunu - Təkminləşdirilmiş - 1) ən yaxın xanalar yoxlanılır. 2) Bərabərə bitən oyun.
int main()
{
	char xo;
	int yas;
	string ad;
	string cins;
	char symbol1 = 'K';
	char symbol2 = 'i';
	char symbol3 = 's';
	char symbol4 = 'i';
	char symbol5 = 'Q';
	char symbol6 = 'a';
	char symbol7 = 'd';
	char symbol8 = 'i';
	char symbol9 = 'n';
	int qayda = 0;
	int davam = 0;
	int xananomresi = 0;
	char xana[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
	cout << endl;
	cout << " ============================================================ " << endl;
	cout << " Latifli Mehraj                                   Baku - 2020 " << endl;
	cout << " ============================================================ " << endl;
	cout << endl;
	cout << "  X |   | X       | O |   " << endl;
	cout << " -----------   -----------" << endl;
	cout << "    | X |       O |   | O " << endl;
	cout << " -----------   -----------" << endl;
	cout << "  X |   | X       | O |   " << endl;
	cout << endl;
	cout << " ============================================================ " << endl;
	cout << " Step Academy                               Qrup: FBE_2914_AZ " << endl;
	cout << " ============================================================ " << endl;
	cout << endl;

	while (true) {
		system("color 7");
		Sleep(1000);
		system("color 9");
		Sleep(1000);
		system("color 7");
		Sleep(1000);
		system("color 9");
		Sleep(1000);
		break;
	}
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << " Adinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	getline(cin, ad);
	system("color 9");
	cout << endl;
	cout << " Cinsinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	cin.clear();
	getline(cin, cins);
	system("color 9");
	cout << endl;
	cout << " Yasinizi daxil edin: ";
	SetConsoleTextAttribute(color, 7);
	cin >> yas;
	system("color 9");
	cout << endl;
	cout << " X ve ya O: ";
	SetConsoleTextAttribute(color, 7);
	cin >> xo;
	cout << endl;
	system("color 9");
	system("cls");
	cout << endl;

	// Seçiminiz x olarsa
	if (xo == 'x' || xo == 'X')
	{
		int a = cins.size();
		for (int i = 0; i < a; i++)
		{
			if (cins[i] == symbol1 || cins[i] == symbol2 || cins[i] == symbol3 || cins[i] == symbol4)
				cout << " " << yas << " yasli " << ad << " bey, siz X -i secdiniz. " << endl;
			if (cins[i] == symbol5 || cins[i] == symbol6 || cins[i] == symbol7 || cins[i] == symbol8 || cins[i] == symbol9)
				cout << " " << yas << " yasli " << ad << " xanim, siz X -i secdiniz. " << endl;
			break;
		}
		cout << endl;
		cout << " " << 0 << " <- Oynun qaydasi " << endl;
		cout << " \n Qaydalar ile tanis olun: ";
		SetConsoleTextAttribute(color, 7);
		cin >> qayda;
		cout << endl;
		if (qayda == 0)
		{
			cout << "                                  " << endl;
			cout << "    ^   ^                         " << endl;
			cout << "  X | X | X      X | O | X        " << endl;
			cout << " ----------->   -----------       " << endl;
			cout << "  X | X | X      O | X | O        " << endl;
			cout << " ----------->   -----------       " << endl;
			cout << "  X | X | X      X | O | X        " << endl;
			cout << "                                  " << endl;
			cout << endl;
			cout << " \n Davam etmek ucun 1 -e basin: ";
			system("color 9");
			SetConsoleTextAttribute(color, 7);
			cin >> davam;
			system("cls");
			if (davam == 1) {
				cout << endl;
				cout << "  1 | 2 | 3  " << endl;
				cout << " ----------- " << endl;
				cout << "  4 | 5 | 6  " << endl;
				cout << " ----------- " << endl;
				cout << "  7 | 8 | 9  " << endl;
				cout << endl;
				cout << endl;
				for (int i = 0; i < 100; i++)
				{
					cout << " Xanani sec: ";
					cin >> xananomresi;
					switch (xananomresi) {
					case 1:
						xana[0][0] = 'X';
						if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						break;
					case 2:
						xana[0][1] = 'X';
						if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						break;
					case 3:
						xana[0][2] = 'X';
						if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						break;
					case 4:
						xana[1][0] = 'X';
						if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						break;
					case 5:
						xana[1][1] = 'X';
						if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						break;
					case 6:
						xana[1][2] = 'X';
						if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						break;
					case 7:
						xana[2][0] = 'X';
						if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						break;
					case 8:
						xana[2][1] = 'X';
						if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[2][2] != ' O ' && xana[2][2] != ' X ' && xana[2][2] == '9')
						{
							xana[2][2] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						break;
					case 9:
						xana[2][2] = 'X';
						if (xana[0][2] != ' O ' && xana[0][2] != ' X ' && xana[0][2] == '3')
						{
							xana[0][2] = 'O';
						}
						else if (xana[1][2] != ' O ' && xana[1][2] != ' X ' && xana[1][2] == '6')
						{
							xana[1][2] = 'O';
						}
						else if (xana[2][1] != ' O ' && xana[2][1] != ' X ' && xana[2][1] == '8')
						{
							xana[2][1] = 'O';
						}
						else if (xana[2][0] != ' O ' && xana[2][0] != ' X ' && xana[2][0] == '7')
						{
							xana[2][0] = 'O';
						}
						else if (xana[1][1] != ' O ' && xana[1][1] != ' X ' && xana[1][1] == '5')
						{
							xana[1][1] = 'O';
						}
						else if (xana[0][0] != ' O ' && xana[0][0] != ' X ' && xana[0][0] == '1')
						{
							xana[0][0] = 'O';
						}
						else if (xana[0][1] != ' O ' && xana[0][1] != ' X ' && xana[0][1] == '2')
						{
							xana[0][1] = 'O';
						}
						else if (xana[1][0] != ' O ' && xana[1][0] != ' X ' && xana[1][0] == '4')
						{
							xana[1][0] = 'O';
						}
						break;
					}
					cout << endl;
					system("cls");
					cout << endl;
					cout << "  " << xana[0][0] << " | " << xana[0][1] << " | " << xana[0][2] << endl;
					cout << " -----------   " << endl;
					cout << "  " << xana[1][0] << " | " << xana[1][1] << " | " << xana[1][2] << endl;
					cout << " -----------   " << endl;
					cout << "  " << xana[2][0] << " | " << xana[2][1] << " | " << xana[2][2] << endl;
					cout << endl;

					if (xana[0][0] == 'X' && xana[0][1] == 'X' && xana[0][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[1][0] == 'X' && xana[1][1] == 'X' && xana[1][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[2][0] == 'X' && xana[2][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'X' && xana[1][1] == 'X' && xana[2][0] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][0] == 'X' && xana[2][0] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][1] == 'X' && xana[1][1] == 'X' && xana[2][1] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'X' && xana[1][2] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}

					if (xana[0][0] == 'O' && xana[0][1] == 'O' && xana[0][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[1][0] == 'O' && xana[1][1] == 'O' && xana[1][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[2][0] == 'O' && xana[2][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'O' && xana[1][1] == 'O' && xana[2][0] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][0] == 'O' && xana[2][0] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][1] == 'O' && xana[1][1] == 'O' && xana[2][1] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'O' && xana[1][2] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}

					//draw (berabere)
					else if (((xana[0][0] == 'X' || xana[0][0] == 'O') && (xana[0][1] == 'X' || xana[0][1] == 'O') && (xana[0][2] == 'X' || xana[0][2] == 'O')) && ((xana[1][0] == 'X' || xana[1][0] == 'O') && (xana[1][1] == 'X' || xana[1][1] == 'O') && (xana[1][2] == 'X' || xana[1][2] == 'O')) && ((xana[2][0] == 'X' || xana[2][0] == 'O') && (xana[2][1] == 'X' || xana[2][1] == 'O') && (xana[2][2] == 'X' || xana[2][2] == 'O')))
					{
						cout << " Berabere." << endl;
						break;
					}





				}
			}
		}
	}



	// Seçiminiz O olarsa
	if (xo == 'o' || xo == 'O')
	{
		int a = cins.size();
		for (int i = 0; i < a; i++)
		{
			if (cins[i] == symbol1 || cins[i] == symbol2 || cins[i] == symbol3 || cins[i] == symbol4)
				cout << " " << yas << " yasli " << ad << " bey, siz O -i secdiniz. " << endl;
			if (cins[i] == symbol5 || cins[i] == symbol6 || cins[i] == symbol7 || cins[i] == symbol8 || cins[i] == symbol9)
				cout << " " << yas << " yasli " << ad << " xanim, siz O -i secdiniz. " << endl;
			break;
		}
		cout << endl;
		cout << " " << 0 << " <- Oynun qaydasi " << endl;
		cout << " \n Qaydalar ile tanis olun: ";
		SetConsoleTextAttribute(color, 7);
		cin >> qayda;
		cout << endl;
		if (qayda == 0)
		{
			cout << "                                  " << endl;
			cout << "    ^   ^                         " << endl;
			cout << "  O | O | O      O | X | O        " << endl;
			cout << " ----------->   -----------       " << endl;
			cout << "  O | O | O      X | O | X        " << endl;
			cout << " ----------->   -----------       " << endl;
			cout << "  O | O | O      O | X | O        " << endl;
			cout << "                                  " << endl;
			cout << endl;
			cout << " \n Davam etmek ucun 1 -e basin: ";
			system("color 9");
			SetConsoleTextAttribute(color, 7);
			cin >> davam;
			system("cls");
			if (davam == 1) {
				cout << endl;
				cout << "  1 | 2 | 3  " << endl;
				cout << " ----------- " << endl;
				cout << "  4 | 5 | 6  " << endl;
				cout << " ----------- " << endl;
				cout << "  7 | 8 | 9  " << endl;
				cout << endl;
				cout << endl;
				for (int i = 0; i < 100; i++)
				{
					cout << " Xanani sec: ";
					cin >> xananomresi;
					switch (xananomresi) {
					case 1:
						xana[0][0] = 'O';
						if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';

						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						break;
					case 2:
						xana[0][1] = 'O';
						if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						break;
					case 3:
						xana[0][2] = 'O';
						if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}

						break;
					case 4:
						xana[1][0] = 'O';
						if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}

						break;
					case 5:
						xana[1][1] = 'O';
						if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}

						break;
					case 6:
						xana[1][2] = 'O';
						if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						break;
					case 7:
						xana[2][0] = 'O';
						if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						break;
					case 8:
						xana[2][1] = 'O';
						if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[2][2] != ' X ' && xana[2][2] != ' O ' && xana[2][2] == '9')
						{
							xana[2][2] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						break;
					case 9:
						xana[2][2] = 'O';
						if (xana[1][2] != ' X ' && xana[1][2] != ' O ' && xana[1][2] == '6')
						{
							xana[1][2] = 'X';
						}
						else if (xana[0][2] != ' X ' && xana[0][2] != ' O ' && xana[0][2] == '3')
						{
							xana[0][2] = 'X';
						}
						else if (xana[2][1] != ' X ' && xana[2][1] != ' O ' && xana[2][1] == '8')
						{
							xana[2][1] = 'X';
						}
						else if (xana[1][1] != ' X ' && xana[1][1] != ' O ' && xana[1][1] == '5')
						{
							xana[1][1] = 'X';
						}
						else if (xana[2][0] != ' X ' && xana[2][0] != ' O ' && xana[2][0] == '7')
						{
							xana[2][0] = 'X';
						}
						else if (xana[0][0] != ' X ' && xana[0][0] != ' O ' && xana[0][0] == '1')
						{
							xana[0][0] = 'X';
						}
						else if (xana[0][1] != ' X ' && xana[0][1] != ' O ' && xana[0][1] == '2')
						{
							xana[0][1] = 'X';
						}
						else if (xana[1][0] != ' X ' && xana[1][0] != ' O ' && xana[1][0] == '4')
						{
							xana[1][0] = 'X';
						}
						break;
					}
					cout << endl;
					system("cls");
					cout << endl;
					cout << "  " << xana[0][0] << " | " << xana[0][1] << " | " << xana[0][2] << endl;
					cout << " -----------   " << endl;
					cout << "  " << xana[1][0] << " | " << xana[1][1] << " | " << xana[1][2] << endl;
					cout << " -----------   " << endl;
					cout << "  " << xana[2][0] << " | " << xana[2][1] << " | " << xana[2][2] << endl;
					cout << endl;

					if (xana[0][0] == 'O' && xana[0][1] == 'O' && xana[0][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[1][0] == 'O' && xana[1][1] == 'O' && xana[1][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[2][0] == 'O' && xana[2][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][1] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'O' && xana[1][1] == 'O' && xana[2][0] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'O' && xana[1][0] == 'O' && xana[2][0] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][1] == 'O' && xana[1][1] == 'O' && xana[2][1] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'O' && xana[1][2] == 'O' && xana[2][2] == 'O')
					{
						cout << " Siz uddunuz." << endl;
						break;
					}


					if (xana[0][0] == 'X' && xana[0][1] == 'X' && xana[0][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[1][0] == 'X' && xana[1][1] == 'X' && xana[1][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[2][0] == 'X' && xana[2][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][1] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'X' && xana[1][1] == 'X' && xana[2][0] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][0] == 'X' && xana[1][0] == 'X' && xana[2][0] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][1] == 'X' && xana[1][1] == 'X' && xana[2][1] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}
					else if (xana[0][2] == 'X' && xana[1][2] == 'X' && xana[2][2] == 'X')
					{
						cout << " Siz uduzdunuz." << endl;
						break;
					}


					//draw (berabere)
					else if (((xana[0][0] == 'X' || xana[0][0] == 'O') && (xana[0][1] == 'X' || xana[0][1] == 'O') && (xana[0][2] == 'X' || xana[0][2] == 'O')) && ((xana[1][0] == 'X' || xana[1][0] == 'O') && (xana[1][1] == 'X' || xana[1][1] == 'O') && (xana[1][2] == 'X' || xana[1][2] == 'O')) && ((xana[2][0] == 'X' || xana[2][0] == 'O') && (xana[2][1] == 'X' || xana[2][1] == 'O') && (xana[2][2] == 'X' || xana[2][2] == 'O')))
					{
						cout << " Berabere." << endl;
						break;
					}
				}
			}
		}
	}
}
