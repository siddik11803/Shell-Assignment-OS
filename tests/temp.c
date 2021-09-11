#include <stdio.h>
#include <string.h>
#define MAX_PATH_BUF 200
void removeSpaces(char inputString[MAX_PATH_BUF])
{
    int readIndex = 0, writeIndex;
    char outputArray[MAX_PATH_BUF];
    while (inputString[readIndex] == ' ')
    {
        readIndex++;
    }

    for (writeIndex = 0; inputString[readIndex] != '\0'; readIndex++)
    {
        if (inputString[readIndex] == ' ' && inputString[readIndex - 1] == ' ')
        {
            continue;
        }
        outputArray[writeIndex] = inputString[readIndex];
        writeIndex++;
    }
    outputArray[writeIndex] = '\0';
    strcpy(inputString, outputArray);
}
int main()
{
    while(1){
        char string[MAX_PATH_BUF];
        fgets(string, MAX_PATH_BUF, stdin);
        removeSpaces(string);
        printf("%s", string);
    }
    return 0;
}
