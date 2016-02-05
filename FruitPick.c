/*Program Fruit Picker
Year: 2016
Done By: Dwayne A. Robinson */

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void Apple();
void Cherry();
void Pear();
void Quit();
void Menu();

void Menu()
{
	char pick;
	system("cls");
	printf(" \n \n");
	printf("        a. Apple \n");
	printf("        c. Cherry \n");
	printf("        p. Pear \n");
	printf("        q. Quit \n");
	printf("        Enter your choice: \n");
	scanf("%s", &pick);
	switch(pick)
	{
		case 'a':
		{
			Apple();
		}
		break;
		case 'c':
		{
			Cherry();
		}
		break;
		case 'p':
		{
			Pear();
		}
		break;
		case 'q':
		{
			Quit();
		}
		break;
		default:
		{
			system("cls");
			printf("Incorrect Choice \n");
			getche();
			Menu();
		}
		break;
	}
}
void Apple()
{
	system("cls");
	MessageBox(0,"Keeping The Doctor Away!","Fruit",1);
	printf("\n \n -----You selected Apple------- \n");
	getche();
	Menu();
}
void Cherry()
{
	system("cls");
	MessageBox(0,"Cherry Lover","Fruit",1);
	printf("\n \n -----You selected Cherry------- \n");
	getche();
	Menu();
}
void Pear()
{
	system("cls");
	MessageBox(0,"Dare to choose Pear!","Fruit",1);
	printf("\n \n -----You selected Pear--------- \n");
	getche();
	Menu();
}
void Quit()
{
	system("cls");
	printf("Exiting... \n");
	getche();
	exit(0);
}
void main()
{
	system("color 81");
	MessageBox(0,"Welcome to Fruit Picker!","Menu",1);
	Menu();
}
