#include<iostream>
using namespace std;

int main()
{

	// Declayring

	char symbol1 = '\0', symbol2 = '\0';
	char a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', j = ' ';
	int  pos1 = 0, pos2 = 0;

	// Initial Input

	cout << "Player 1 choose a Symbol : ";
	cin >> symbol1;
	cout << "Player 2 choose a Symbol : ";
	cin >> symbol2;

	if (symbol1 == symbol2)
	{
		cout << "Both Symbols Cannot Be Same.\nTry Again!";
		return 1;
	}
	cout << "Table's Structure is : " << endl;

	// Sample Input

	cout << "\t  1 | 2 | 3  " << endl;
	cout << "\t ----------- " << endl;
	cout << "\t  4 | 5 | 6  " << endl;
	cout << "\t ----------- " << endl;
	cout << "\t  7 | 8 | 9  " << endl;

	// Game Code

	for (int i = 1;i >0;i++)
	{

		// For Pos1

		for (int p1 = i;p1 >0;p1++)
		{

			// Taking Position

			cout << "Player 1 Choose The Position : ";
			cin >> pos1;

			// Errors Fixing

			if ((pos1 < 1) || (pos1 > 9))
			{
				cout << pos1 << " is Invalid Input" << endl;
				continue;
			}

			// Assigning Positions

			if (pos1 == 1)
			{
				if ((a == symbol1) || (a == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					a = symbol1;
				}
			}
			if (pos1 == 2)
			{
				if ((b == symbol1) || (b == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					b = symbol1;
				}
			}
			if (pos1 == 3)
			{
				if ((c == symbol1) || (c == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					c = symbol1;
				}
			}
			if (pos1 == 4)
			{
				if ((d == symbol1) || (d == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					d = symbol1;
				}
			}
			if (pos1 == 5)
			{
				if ((e == symbol1) || (e == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					e = symbol1;
				}
			}
			if (pos1 == 6)
			{
				if ((f == symbol1) || (f == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					f = symbol1;
				}
			}
			if (pos1 == 7)
			{
				if ((g == symbol1) || (g == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					g = symbol1;
				}
			}
			if (pos1 == 8)
			{
				if ((h == symbol1) || (h == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					h = symbol1;
				}
			}
			if (pos1 == 9)
			{
				if ((j == symbol1) || (j == symbol2))
				{
					cout << pos1 << " Already Taken" << endl;
					continue;
				}
				else
				{
					j = symbol1;
				}
			}
			// Layout

			cout << "\t  " << a << " | " << b << " | " << c << "  " << endl;
			cout << "\t ----------- " << endl;
			cout << "\t  " << d << " | " << e << " | " << f << "  " << endl;
			cout << "\t ----------- " << endl;
			cout << "\t  " << g << " | " << h << " | " << j << "  " << endl;

			// Results

			// For Player1

			// Rows


			if ((a == symbol1) && (b == symbol1) && (c == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((d == symbol1) && (e == symbol1) && (f == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((g == symbol1) && (h == symbol1) && (j == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}


			// Columns

			else if ((a == symbol1) && (d == symbol1) && (g == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((b == symbol1) && (e == symbol1) && (h == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((c == symbol1) && (f == symbol1) && (j == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}

			// Diagonals

			else if ((a == symbol1) && (e == symbol1) && (j == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((c == symbol1) && (e == symbol1) && (g == symbol1))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 1 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			
			// Error Solving
	
			if ((a==symbol1||a||symbol2)&&(b==symbol1||b==symbol2)&&(c==symbol1||c==symbol2)&&(d==symbol1||d==symbol2)&&(e==symbol1||e==symbol2)&& (f == symbol1 || f == symbol2)&& (g == symbol1 || g == symbol2)&& (h == symbol1 || h == symbol2)&& (j == symbol1 || j == symbol2))
			{
				if ((a != symbol1) || (b != symbol1) || (c != symbol1) || (d != symbol1) || (e != symbol1) || (f != symbol1) || (g != symbol1) || (h != symbol1) || (j != symbol1))
				{
					cout << "-----------------------------------------------" << endl;
					cout << "                   Result" << endl;
					cout << "-----------------------------------------------" << endl;
					cout << "Alas!\nMatch Tie." << endl;
					cout << "-----------------------------------------------" << endl;
					break;
				}
			}
			break;
		}
		
		// For Complete Termination.
		if ((a == symbol1) && (b == symbol1) && (c == symbol1))
		{
			break;
		}
		else if ((d == symbol1) && (e == symbol1) && (f == symbol1))
		{
			break;
		}
		else if ((g == symbol1) && (h == symbol1) && (j == symbol1))
		{
			break;
		}


		// Columns

		else if ((a == symbol1) && (d == symbol1) && (g == symbol1))
		{
			break;
		}
		else if ((b == symbol1) && (e == symbol1) && (h == symbol1))
		{
			break;
		}
		else if ((c == symbol1) && (f == symbol1) && (j == symbol1))
		{
			break;
		}

		// Diagonals

		else if ((a == symbol1) && (e == symbol1) && (j == symbol1))
		{
			break;
		}
		else if ((c == symbol1) && (e == symbol1) && (g == symbol1))
		{
			break;
		}

		// Error Solving

		if ((a == symbol1 || a || symbol2) && (b == symbol1 || b == symbol2) && (c == symbol1 || c == symbol2) && (d == symbol1 || d == symbol2) && (e == symbol1 || e == symbol2) && (f == symbol1 || f == symbol2) && (g == symbol1 || g == symbol2) && (h == symbol1 || h == symbol2) && (j == symbol1 || j == symbol2))
		{
			break;
		}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		// For Pos2

		for (int p2 = i;p2 >0;p2++)
		{

			// Taking Position

			cout << "Player 2 Choose The Position : ";
			cin >> pos2;

			// Errors Fixing

			if ((pos2 < 1) || (pos2 > 9))
			{
				cout << pos2 << " is Invalid Input" << endl;
				continue;
			}

			// Assigning Positions

			if (pos2 == 1)
			{
				if ((a == symbol1) || (a == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					a = symbol2;
				}
			}
			if (pos2 == 2)
			{
				if ((b == symbol1) || (b == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					b = symbol2;
				}
			}
			if (pos2 == 3)
			{
				if ((c == symbol1) || (c == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					c = symbol2;
				}
			}
			if (pos2 == 4)
			{
				if ((d == symbol1) || (d == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					d = symbol2;
				}
			}
			if (pos2 == 5)
			{
				if ((e == symbol1) || (e == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					e = symbol2;
				}
			}
			if (pos2 == 6)
			{
				if ((f == symbol1) || (f == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					f = symbol2;
				}
			}
			if (pos2 == 7)
			{
				if ((g == symbol1) || (g == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					g = symbol2;
				}
			}
			if (pos2 == 8)
			{
				if ((h == symbol1) || (h == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					h = symbol2;
				}
			}
			if (pos2 == 9)
			{
				if ((j == symbol1) || (j == symbol2))
				{
					cout << pos2 << " Already Taken" << endl;
					continue;
				}
				else
				{
					j = symbol2;
				}
			}

			// Layout

			cout << "\t  " << a << " | " << b << " | " << c << "  " << endl;
			cout << "\t ----------- " << endl;
			cout << "\t  " << d << " | " << e << " | " << f << "  " << endl;
			cout << "\t ----------- " << endl;
			cout << "\t  " << g << " | " << h << " | " << j << "  " << endl;

			// Results

			// For Player 2

			// Rows

			if ((a == symbol2) && (b == symbol2) && (c == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((d == symbol2) && (e == symbol2) && (f == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;

			}
			else if ((g == symbol2) && (h == symbol2) && (j == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}

			// Columns

			else if ((a == symbol2) && (d == symbol2) && (g == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((b == symbol2) && (e == symbol2) && (h == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((c == symbol2) && (f == symbol2) && (j == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;

			}

			// Diagonals

			else if ((a == symbol2) && (e == symbol2) && (j == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}
			else if ((c == symbol2) && (e == symbol2) && (g == symbol2))
			{
				cout << "-----------------------------------------------" << endl;
				cout << "                   Result" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Congurats!\nPlayer 2 Won." << endl;
				cout << "-----------------------------------------------" << endl;
				break;
			}

			break;

		}

		// For Complete Termination


		if ((a == symbol2) && (b == symbol2) && (c == symbol2))
		{
			break;
		}
		else if ((d == symbol2) && (e == symbol2) && (f == symbol2))
		{
			break;

		}
		else if ((g == symbol2) && (h == symbol2) && (j == symbol2))
		{
			break;
		}

		// Columns

		else if ((a == symbol2) && (d == symbol2) && (g == symbol2))
		{
			break;
		}
		else if ((b == symbol2) && (e == symbol2) && (h == symbol2))
		{
			break;
		}
		else if ((c == symbol2) && (f == symbol2) && (j == symbol2))
		{
			break;
		}

		// Diagonals

		else if ((a == symbol2) && (e == symbol2) && (j == symbol2))
		{
			break;
		}
		else if ((c == symbol2) && (e == symbol2) && (g == symbol2))
		{
			break;
		}



	}
	



	return 0;
}
