#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
char PlayAgain[2];
do{	//DECLARATION
	char a[4][2]={" "," "," "," "};
	char b[4][2]={" "," "," "," "};
	char c[4][2]={" "," "," "," "};
	int ui[10];
	int i;
	
	
	// USER INTERFACE
	
	// USER INPUT
	for (i=1;i<=9;i=i+2){
	
	player1:
	system("cls");
	printf ("\n\t***TIC TAC TOE***\n\n\n");
	printf ("\t     1   2   3\n\n"); 
	printf ("\t1    %s | %s | %s \n",a[1],b[1],c[1]);
	printf ("\t   -------------\n");
	printf ("\t2    %s | %s | %s \n",a[2],b[2],c[2]);
	printf ("\t   -------------\n");
	printf ("\t3    %s | %s | %s \n\n\n\n",a[3],b[3],c[3]);
		
		printf ("\nPlayer 1 (X): ");
		scanf ("%d",&ui[i]);
		switch (ui[i]){
			case 11:
				strcpy (a[1],"X");
				break;
			case 21:
				strcpy (a[2],"X");
				break;
			case 31:
				strcpy (a[3],"X");
				break;
			case 12:
				strcpy (b[1],"X");
				break;
			case 22:
				strcpy (b[2],"X");
				break;
			case 32:
				strcpy (b[3],"X");
				break;
			case 13:
				strcpy (c[1],"X");
				break;
			case 23:
				strcpy (c[2],"X");
				break;
			case 33:
				strcpy (c[3],"X");
				break;
			default:
				goto player1;
				break;				
		}
		if (
			(strcmp(a[1],"X")==0 && strcmp(b[1],"X")==0 && strcmp(c[1],"X")==0)||
			(strcmp(a[1],"X")==0 && strcmp(a[2],"X")==0 && strcmp(a[3],"X")==0)||
			(strcmp(b[1],"X")==0 && strcmp(b[2],"X")==0 && strcmp(b[3],"X")==0)||
			(strcmp(c[1],"X")==0 && strcmp(c[2],"X")==0 && strcmp(c[3],"X")==0)||
			(strcmp(a[2],"X")==0 && strcmp(b[2],"X")==0 && strcmp(c[2],"X")==0)||
			(strcmp(a[3],"X")==0 && strcmp(b[3],"X")==0 && strcmp(c[3],"X")==0)||
			(strcmp(a[1],"X")==0 && strcmp(b[2],"X")==0 && strcmp(c[3],"X")==0)||
			(strcmp(a[3],"X")==0 && strcmp(b[2],"X")==0 && strcmp(c[1],"X")==0)
		){
			system("cls");
			printf ("\n\t***TIC TAC TOE***\n\n\n");
			printf ("\t     1   2   3\n\n"); 
			printf ("\t1    %s | %s | %s \n",a[1],b[1],c[1]);
			printf ("\t   -------------\n");
			printf ("\t2    %s | %s | %s \n",a[2],b[2],c[2]);
			printf ("\t   -------------\n");
			printf ("\t3    %s | %s | %s \n\n\n\n",a[3],b[3],c[3]);
			printf("Player 1(X) wins");
			break;
		}
		
		if(i==9){
			system("cls");
			printf ("\n\t***TIC TAC TOE***\n\n\n");
			printf ("\t     1   2   3\n\n"); 
			printf ("\t1    %s | %s | %s \n",a[1],b[1],c[1]);
			printf ("\t   -------------\n");
			printf ("\t2    %s | %s | %s \n",a[2],b[2],c[2]);
			printf ("\t   -------------\n");
			printf ("\t3    %s | %s | %s \n\n\n\n",a[3],b[3],c[3]);
			printf ("\n\nThe game is Draw");
			break;
		}
	
	player2:
	system ("cls");
	printf ("\n\t***TIC TAC TOE***\n\n\n");
	printf ("\t     1   2   3\n\n"); 
	printf ("\t1    %s | %s | %s \n",a[1],b[1],c[1]);
	printf ("\t   -------------\n");
	printf ("\t2    %s | %s | %s \n",a[2],b[2],c[2]);
	printf ("\t   -------------\n");
	printf ("\t3    %s | %s | %s \n\n\n\n",a[3],b[3],c[3]);
		printf ("\nPlayer 2 (O): ");
		scanf ("%d",&ui[i+1]);
		switch (ui[i+1]){
			case 11:
				strcpy (a[1],"O");
				break;
			case 21:
				strcpy (a[2],"O");
				break;
			case 31:
				strcpy (a[3],"O");
				break;
			case 12:
				strcpy (b[1],"O");
				break;
			case 22:
				strcpy (b[2],"O");
				break;
			case 32:
				strcpy (b[3],"O");
				break;
			case 13:
				strcpy (c[1],"O");
				break;
			case 23:
				strcpy (c[2],"O");
				break;
			case 33:
				strcpy (c[3],"O");
				break;
			default:
				goto player2;
				break;				
		}
		
		if (
			(strcmp(a[1],"O")==0 && strcmp(b[1],"O")==0 && strcmp(c[1],"O")==0)||
			(strcmp(a[1],"O")==0 && strcmp(a[2],"O")==0 && strcmp(a[3],"O")==0)||
			(strcmp(b[1],"O")==0 && strcmp(b[2],"O")==0 && strcmp(b[3],"O")==0)||
			(strcmp(c[1],"O")==0 && strcmp(c[2],"O")==0 && strcmp(c[3],"O")==0)||
			(strcmp(a[2],"O")==0 && strcmp(b[2],"O")==0 && strcmp(c[2],"O")==0)||
			(strcmp(a[3],"O")==0 && strcmp(b[3],"O")==0 && strcmp(c[3],"O")==0)||
			(strcmp(a[1],"O")==0 && strcmp(b[2],"O")==0 && strcmp(c[3],"O")==0)||
			(strcmp(a[3],"O")==0 && strcmp(b[2],"O")==0 && strcmp(c[1],"O")==0)
		){
			system("cls");
			printf ("\n\t***TIC TAC TOE***\n\n\n");
			printf ("\t     1   2   3\n\n"); 
			printf ("\t1    %s | %s | %s \n",a[1],b[1],c[1]);
			printf ("\t   -------------\n");
			printf ("\t2    %s | %s | %s \n",a[2],b[2],c[2]);
			printf ("\t   -------------\n");
			printf ("\t3    %s | %s | %s \n\n\n\n",a[3],b[3],c[3]);
			printf("Player 2(O) wins");
			break;
		}
		
	}
	printf("\n\nPlay Again?(y/n): ");
	scanf("%s",&PlayAgain);

	}while(strcmp(PlayAgain,"y")==0);

return 0;
}