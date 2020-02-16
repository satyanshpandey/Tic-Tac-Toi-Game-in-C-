#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[9] = {'1','2','3','4','5','6','7','8','9'};
void check(char,char);
int end1();
void GameName()
{
	printf("\n\n\t\t\t\t\tTic Tac Toi Game");
}
void Layout()
{
	printf("\n\n\t\t\t\t\t  ---|---|---");
	printf("\n\t\t\t\t\t   %c | %c |%c",a[0],a[1],a[2]);
	printf("\n\t\t\t\t\t  ---|---|---");
	printf("\n\t\t\t\t\t   %c | %c |%c",a[3],a[4],a[5]);
	printf("\n\t\t\t\t\t  ---|---|---");
	printf("\n\t\t\t\t\t   %c | %c |%c",a[6],a[7],a[8]);
	printf("\n\t\t\t\t\t  ---|---|---");
}

void Input()
{
	printf("\n\t\t\t Player 1 symbol : X ");
	printf("\n\t\t\t Player 2 symbol : 0");
}

void start()
{
	char player;
	printf("\n\nEnter who will start the Game: Player 1 or Player 2\n");
//	printf("\n\t\t\t Enter '1' for the first player and ");
//	printf("\n\t\t\t Enter '2' for the seceond player---> ");
	scanf("%c",&player);
}
int count=0;
void main1()
{
	
	char p,s;
	printf("\nEnter 'Position=(1,2,3,...,9)' and 'Symbol=('X' or '0')' for the player:\n ");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	check(p,s);
	count++;
}
void check(char P, char S)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if (a[i]==P)
		{
			a[i]=S;
		}
	} 
}

int end1()

{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x'))
		return(100);
	else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0'))
		return(200);
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
		return(100);
	else if(a[1]=='0'&&a[0]=='x'&&a[7]=='0')
		return(200);
	else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
		return(100);
	else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
		return(200);
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
		return(100);
	else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
		return(200);
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
		return(100);
	else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
		return(200);
	else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
		return(100);
	else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
		return(200);
	else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
		return(100);
	else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
		return(200);
	else
		return(300);
}

main()

{
	
	int k;
	char ch;
	system("cls");
	GameName();
	Layout();
	Input();
	start();
	main1();
	Layout();
	label:
	system("cls");
	Layout();
	main1();
	k=end1();
	system("cls");
	Layout(); 	 
		if(count<9)
		{
			if(k==100)
			
			{
				printf("\nCongratulation's Player 1 Win the Game...!");
			}
			
			else if(k==200)
			
			{
			printf("\nPlayer 2 Win the Game...!");
			}
			
			else
				goto label;
		}
		else
				printf("\nMatch Draw!");
	getch();
}


