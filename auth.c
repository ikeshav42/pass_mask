#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void tstadmin()
{
    char pass[30];
    char ch;
    int pos=0;
    int flag=0;
    int index=0;

    printf("Enter your password: ");

    while(1)
    {
        ch=getch();//taking characters
        if(ch==13)//enter key
        {
            break;
        }
        else if(ch==8)//backspace key
        {
            if(pos>0)//characters need to be present
            {
                pos--;//reduce position
                pass[pos]= '\0';//make existing char null
                printf("\b \b");// "\b is backspace character"
            }
        }
        else
        {
            pass[pos]=ch;//put input char in array
            pos++;//move to next position
            printf("*");
        }
    }
    pass[pos]='\0';//terminate the character array
    printf("\n");

    printf("Entered password: \033[1;31m%s",pass);
    printf("\033[0m");
}
int main()
{
    tstadmin();
    return 0;
}