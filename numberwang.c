#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <windows.h>

void gotoxy(int x,int y)
{
	COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

int x;
int i = 0;

char loading[] = "L O A D I N G";
char the_end[] = "T H E E N D ? ? ? ? ? ? ? ? ? ? ? ? ?";

int main(int argc, char * args[])
{
    SetConsoleTitle("TESTING");

    gotoxy(42,10);
    system("pause");

    gotoxy(50,8);
    printf("Howdy Partner\n");
   
    gotoxy(42,10);
    system("pause");
    system("cls");
	
    gotoxy(50,8);
    printf("Yeehaw ;D\n");
    gotoxy(42,10);
    system("pause");
    system("cls");

    gotoxy(50,8);

    for(int k = 0; k < 3; k++)
    {
        gotoxy(50,8);
        for(int j = 0; j < 14; j++)
        {
            printf("%c", loading[j]);
            Sleep(250);
        }
        printf("\n");
        gotoxy(50,10);
        for(int i = 0; i<13; i++)
        {
            printf(".");
            Sleep(100);
        }
        system("cls");
    }

    //gotoxy(50,10);
    //do{
        //printf(".");
        //Sleep(500);
        //i++;
    //}while(i < 14);

    printf("\n");

    gotoxy(42,12);
    system("pause");
    system("cls");

    gotoxy(50,8);
    printf("Enter a number: ");
    scanf("%d", &x);
    system("cls");

    gotoxy(50,8);
    printf("You entered: %i\n", x);
    gotoxy(42,10);
    system("pause");

    gotoxy(42,8);
    printf("CONGRATULATIONS, THAT'S NUMBERWANG.\n");
    gotoxy(42,10);
    system("pause");

    gotoxy(42,8);
    for(int p = 0; p < 39; p++)
    {
        printf("%c", the_end[p]);
        Sleep(300);
    }

    system("cls");
    gotoxy(50,8);
    printf("D':<");
    Sleep(200);

    return 0;


}