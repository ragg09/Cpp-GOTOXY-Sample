//2018 codes

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
//gotoxy

void gotoxy(int x, int y)
{ HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X=x;
dwCursorPosition.Y=y;
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

int main()
{
	int sec, cons_sec=60, mins, secs, row=5;
	char ans;
	
	system("cls");
	start:
	gotoxy(31,1); printf("Minutes in Second");
	gotoxy(12,4); printf("Seconds");
	gotoxy(31,4); printf("=");
	gotoxy(44,4); printf("Minutes");
	gotoxy(63,4); printf("Second");
	
	gotoxy(24,18);
	printf("                                            ");
	gotoxy(24,18); printf("Enter desired value for seconds: ");
	scanf("%d", &sec);
	
	mins = sec/cons_sec;
	secs=sec%cons_sec;
	
	gotoxy(12,row); printf("%d", sec);
	gotoxy(44,row); printf("%d", mins);
	gotoxy(63,row); printf("%d", secs);
	row++;
	
	exit:
	gotoxy(1,20);
	printf("                                                                            ");	
	gotoxy(1,20);
	printf("Do you want to continue? Y/N: ");
	ans=toupper(getch());
	if(!(ans=='Y'||ans=='N' ))
	{
		goto exit;
	}
	else if(ans=='Y')
	{
		if(row<=7)
		{
			goto start;
		}
		else
		{
			row=5;
			system("cls");
			goto start;
		}
	}
	else
	{
		exit(0);
	}
	getch();
	return 0;
}

