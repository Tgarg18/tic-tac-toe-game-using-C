#include<stdio.h>
#include<stdlib.h>
char board[3][3];

/**
 * Function to display the board for the Tic Tac Toe game.
 */
void showboard()
{
	for(int a=0;a<3;a++)
	{
		printf(" %c | %c | %c\n",board[a][0],board[a][1],board[a][2]);
		if(a != 2)
		{
			printf("-----------\n");
		}		
	}
}

/**
 * Function to prompt Player 1 to enter the index of the box and move their marker to that position.
 * @param None
 * @return None
 * @throws None
 */
void move_player1()
{
	int i,j;
	printf("Player 1(X),Enter the index of the box: ");
	scanf("%d %d",&i,&j);
	if((board[i][j] != ' ') || (i<0) || (i>2) || (j<0) || (j>2))
	{
		printf("Enter a valid index number!\n");
		move_player1();
	}
	else
	{
		board[i][j]='X';
		system("cls");
		showboard();
	}
}

/**
 * Function to move player 2 in the game.
 * @param None
 * @return None
 * @throws None
 */
void move_player2()
{
	int i,j;
	printf("Player 2(O),Enter the index of the box: ");
	scanf("%d %d",&i,&j);
	if((board[i][j] != ' ') || (i<0) || (i>2) || (j<0) || (j>2))
	{
		printf("Enter a valid index number!\n");
		move_player2();
	}
	else
	{
		board[i][j]='O';
		system("cls");
		showboard();
	}
}

/**
 * Function to check if the game is over or not.
 * @param None
 * @return 1 if game is over else 0
 * @throws None
 */
int result()
{
	for(int i=0;i<3;i++)
	{
		if((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && board[i][1]!=' ')
		{
			return 1;
		}
		if((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && board[1][i]!=' ')
		{
			return 1;
		}
		if(i==0 && board[i][i] == board[i+1][i+1] && board[i+1][i+1] == board[i+2][i+2] && board[i][i]!=' ')
		{
			return 1;
		}
		if (board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			board[i][j]=' ';
		}	
	}
	printf("TIC-TAC-TOE GAME!\n");
	showboard();
	int count=0;
	while(1)
	{	
		count++;		
		move_player1();
		int status = result();
		if(status==1)
		{
			printf("Player1(X) is WINNER!");
			break;
		}
		if(count==9)
		{
			printf("Match Tied!");
			break;
		}
		count++;	
		move_player2();	
		status = result();
		if(status==1)
		{
			printf("Player2(O) is WINNER!");
			break;
		}
	}
	return 0;
}