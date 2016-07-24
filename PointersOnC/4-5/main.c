#include "stdio.h"
#define FALSE 0
#define TRUE 1

void main()
{
    char input[128], lastInput[128];
    int printFlag=FALSE;

    while(1)
    {
        gets(input);
        if(strcmp(input, lastInput)==0)
        {
            if(printFlag==FALSE)
            {
                puts(lastInput);
                printFlag = TRUE;
            }
        }
        else
        {
            strcpy(lastInput, input);
            printFlag=FALSE;
        }
    }
}
