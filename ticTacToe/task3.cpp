#include<iostream>
using namespace std;
int player1=0;
int player2 =0;
int move;
class ticTacToe {

	int arr[3][3];
public:
	ticTacToe()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	void displayBoard()
	{
		
		if(move==1)
		{
			cout<<"you did a wrong move :("<<endl;
		}
		system("CLS");
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout <<"   "<< arr[i][j] << "  | ";
			}
			cout << endl;
		}
	}
	void getPlayer1(int n1)
	{
		int x = 1;
		if (isValidMove(n1))
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (x == n1)
					{
						arr[i][j] = 1;
					}
					x++;
				}
			}
		}
	}

	void getPlayer2(int n2)
	{
		int x = 1;
		if (isValidMove(n2))
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (x == n2)
					{
						arr[i][j] = 2;
					}
					x++;
				}
			}
		}
	}
	bool isValidMove(int n)
	{
		int x = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (x == n)
				{
					if (arr[i][j] == 0)
					{
						return true;
						
						move=0;
					}
					else
					{
						return false;
						move =1;
					}
				}
			}
		}
	}
	bool winCheck1()
	{
		if((arr[0][0]==1 && arr[0][1]==1 && arr[0][2]==1) || (arr[1][0]==1 && arr[1][1]==1 && arr[1][2]==1) || (arr[2][0]==1 && arr[2][1]==1 && arr[2][2]==1))
		{
			return true;
			player1 = 1;
		}
		else if((arr[0][0]==1 && arr[1][0]==1 && arr[2][0]==1) || (arr[0][1]==1 && arr[1][1]==1 && arr[2][1]==1) || (arr[0][2]==1 && arr[1][2]==1 && arr[2][2]==1))
		{
			return true;
			player1=1;
		}
		
		else if((arr[0][0]==1 && arr[1][1]==1 && arr[2][2]==1) || (arr[0][2]==1 && arr[1][1]==1 && arr[2][0]==1))
		{
			return true;
			player1 = 1;
		}
		else
		{
			return false;
		}
	}
		bool winCheck2()
	{
		if((arr[0][0]==2 && arr[0][1]==2 && arr[0][2]==2)|| (arr[1][0]==2 && arr[1][1]==2 && arr[1][2]==2) || (arr[2][0]==2 && arr[2][1]==2 && arr[2][2]==2))
		{
			return true;
			player2 = 1;
		}
		else if((arr[0][0]==2 && arr[1][0]==2 && arr[2][0]==2) || (arr[0][1]==2 && arr[1][1]==2 && arr[2][1]==2) || (arr[0][2]==2 && arr[1][2]==2 && arr[2][2]==2))
		{
			return true;
			player2=1;
		}
		
		else if((arr[0][0]==2 && arr[1][1]==2 && arr[2][2]==2) || (arr[0][2]==2 && arr[1][1]==2 && arr[2][0]==2))
		{
			return true;
			player2 = 1;
		}
		else
		{
			return false;
		}
	}
};
void playGame()
{
	ticTacToe t;
	t.displayBoard();
	int p1,p2;
	cout<<"""""""""WELCOME TO TIC TAC TOE GAME """"""""""\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "enter for player 1 :";
		cin >> p1;
		t.getPlayer1(p1);
		t.displayBoard();
		if(i>=2)
		{
			if(t.winCheck1())
			{
				cout<<"Player 1 has won the match :) \n";
			}
		}
		if(i==4)
		{
			break;
		}
		cout << "enter for player 2 :";
		cin >> p2;
		t.getPlayer2(p2);
		t.displayBoard();
		if(i>=2)
		{
			if(t.winCheck2())
			{
				cout<<"Player 2 has won the match :) \n";
			}
		}
	}
}
int main()
{
	playGame();
	system("pause");
}
