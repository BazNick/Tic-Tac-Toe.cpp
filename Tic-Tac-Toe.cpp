#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int BoardSquare(int array[][3])
{
	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;
	array[1][0] = 4;
	array[1][1] = 5;
	array[1][2] = 6;
	array[2][0] = 7;
	array[2][1] = 8;
	array[2][2] = 9;


	cout << "Here is board example\n";
	cout << "The numbers from 1-9 are valid numbers which you can choose to make a step\n\n";
	cout << "   -" << array[0][0] << "-|-" << array[0][1] << "-|-" << array[0][2] << '-' << endl;
	
	cout << "   -" << array[1][0] << "-|-" << array[1][1] << "-|-" << array[1][2] << '-' << endl;

	cout << "   -" << array[2][0] << "-|-" << array[2][1] << "-|-" << array[2][2] << '-' << endl;

	
	return array[3][3];
}

int Instance()
{
	char array[3][3];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			array[i][j] = ' ';
		}
	}

	cout << endl;
	int choice;
	while (true)
	{
		
		cout << "Which position do you choose?\n\n";
			cin >> choice;
			if (choice == 1)
			{
				if (array[0][0] == 'X' || array[0][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][0] = 'X';
				array[1][0] = 'O';

			}
			if (choice == 2)
			{
				if (array[0][1] == 'X' || array[0][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][1] = 'X';
				array[0][2] = 'O';

			}
			if (choice == 3)
			{
				if (array[0][2] == 'X' || array[0][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][2] = 'X';
				array[1][2] = 'O';
			}
			if (choice == 4)
			{
				if (array[1][0] == 'X' || array[1][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][0] = 'X';
				array[2][0] = 'O';
			}
			if (choice == 5)
			{
				if (array[1][1] == 'X' || array[1][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][1] = 'X';
				array[2][1] = 'O';
			}
			if (choice == 6)
			{
				if (array[1][2] == 'X' || array[1][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][2] = 'X';
				array[2][2] = 'O';
			}
			if (choice == 7)
			{
				if (array[2][0] == 'X' || array[2][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][0] = 'X';
				array[1][0] = 'O';
			}
			if (choice == 8)
			{
				if (array[2][1] == 'X' || array[2][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][1] = 'X';
				array[1][1] = 'O';
			}
			if (choice == 9)
			{
				if (array[2][2] == 'X' || array[2][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][2] = 'X';
				array[1][2] = 'O';
			}

			if (choice < 1 || choice > 9)
			{
				cout << "Invalid move!\n";
				continue;
			}
		


		cout << "   -" << array[0][0] << "-|-" << array[0][1] << "-|-" << array[0][2] << '-' << endl;

		cout << "   -" << array[1][0] << "-|-" << array[1][1] << "-|-" << array[1][2] << '-' << endl;

		cout << "   -" << array[2][0] << "-|-" << array[2][1] << "-|-" << array[2][2] << '-' << endl;
		cout << endl;


		if ((array[0][0] == 'X') && (array[0][1] == 'X') && (array[0][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[1][0] == 'X') && (array[1][1] == 'X') && (array[1][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[2][0] == 'X') && (array[2][1] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'X') && (array[1][1] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[2][0] == 'X') && (array[1][1] == 'X') && (array[0][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'X') && (array[1][0] == 'X') && (array[2][0] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][1] == 'X') && (array[1][1] == 'X') && (array[2][1] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][2] == 'X') && (array[1][2] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[0][1] == 'O') && (array[0][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[1][0] == 'O') && (array[1][1] == 'O') && (array[1][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[2][0] == 'O') && (array[2][1] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[1][1] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[2][0] == 'O') && (array[1][1] == 'O') && (array[0][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[1][0] == 'O') && (array[2][0] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][1] == 'O') && (array[1][1] == 'O') && (array[2][1] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][2] == 'O') && (array[1][2] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		
		if (array[0][0] != ' '&& array[0][1] != ' '&& array[0][2] != ' '&&array[1][0] != ' '&&array[1][1] != ' '&&array[1][2] != ' '&&array[2][0] != ' '&&array[2][1] != ' '&&array[2][2] != ' ')
		{
			cout << "Nobody wins!\n";
			break;
		}
	}

	return choice;
}

int Game()
{
	char array[3][3];
	
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			array[i][j] = ' ';
		}
	}

	cout << endl;
	int choice;
	while (true)
	{
		    cout << "Which position do you choose?\n\n";
			cin >> choice;
			if (choice == 1)
			{
				if (array[0][0] == 'X' || array[0][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][0] = 'X';
				array[0][1] = 'O';

			}
			if (choice == 2)
			{
				if (array[0][1] == 'X' || array[0][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][1] = 'X';
				array[0][2] = 'O';

			}
			if (choice == 3)
			{
				if (array[0][2] == 'X' || array[0][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[0][2] = 'X';
				array[1][0] = 'O';
			}
			if (choice == 4)
			{
				if (array[1][0] == 'X' || array[1][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][0] = 'X';
				array[1][1] = 'O';
			}
			if (choice == 5)
			{
				if (array[1][1] == 'X' || array[1][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][1] = 'X';
				array[1][2] = 'O';
			}
			if (choice == 6)
			{
				if (array[1][2] == 'X' || array[1][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[1][2] = 'X';
				array[1][1] = 'O';
			}
			if (choice == 7)
			{
				if (array[2][0] == 'X' || array[2][0] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][0] = 'X';
				array[2][1] = 'O';
			}
			if (choice == 8)
			{
				if (array[2][1] == 'X' || array[2][1] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][1] = 'X';
				array[2][2] = 'O';
			}
			if (choice == 9)
			{
				if (array[2][2] == 'X' || array[2][2] == 'O')
				{
					cout << "Invalid move!\n";
					continue;
				}
				array[2][2] = 'X';
				array[2][1] = 'O';
			}

			if (choice < 1 || choice > 9)
			{
				cout << "Invalid move!\n";
				continue;
			}
		

		

		cout << "   -" << array[0][0] << "-|-" << array[0][1] << "-|-" << array[0][2] << '-' << endl;

		cout << "   -" << array[1][0] << "-|-" << array[1][1] << "-|-" << array[1][2] << '-' << endl;

		cout << "   -" << array[2][0] << "-|-" << array[2][1] << "-|-" << array[2][2] << '-' << endl;
		cout << endl;

		
		
		if ((array[0][0] == 'X') && (array[0][1] == 'X') && (array[0][2] == 'X'))
		{
			cout << "You win!\n";
			break;

		}
		if ((array[1][0] == 'X') && (array[1][1] == 'X') && (array[1][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[2][0] == 'X') && (array[2][1] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'X') && (array[1][1] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[2][0] == 'X') && (array[1][1] == 'X') && (array[0][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'X') && (array[1][0] == 'X') && (array[2][0] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][1] == 'X') && (array[1][1] == 'X') && (array[2][1] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][2] == 'X') && (array[1][2] == 'X') && (array[2][2] == 'X'))
		{
			cout << "You win!\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[0][1] == 'O') && (array[0][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[1][0] == 'O') && (array[1][1] == 'O') && (array[1][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[2][0] == 'O') && (array[2][1] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[1][1] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[2][0] == 'O') && (array[1][1] == 'O') && (array[0][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][0] == 'O') && (array[1][0] == 'O') && (array[2][0] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}
		if ((array[0][1] == 'O') && (array[1][1] == 'O') && (array[2][1] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		
		}
		if ((array[0][2] == 'O') && (array[1][2] == 'O') && (array[2][2] == 'O'))
		{
			cout << "You loose!\n";
			cout << "Computer wins\n";
			break;
		}

		if (array[0][0] != ' '&& array[0][1] != ' '&& array[0][2] != ' '&&array[1][0] != ' '&&array[1][1] != ' '&&array[1][2] != ' '&&array[2][0] != ' '&&array[2][1] != ' '&&array[2][2] != ' ')
		{
			cout << "Nobody wins!\n";
			break;
		}
	}

	return choice;
}

int main()
{
	srand(time(NULL));
	
		int array[3][3];
		BoardSquare(array);
		while (true)
		{
		int instance = 1 + rand() % 3;
		switch (instance)
		{
		case 1: Game();
			cin.ignore();
			cin.get();
			return 0;
			break;
		case 2: Instance();
			cin.ignore();
			cin.get();
			return 0;
			break;
		}
		
	}
	
	return 0;
}
