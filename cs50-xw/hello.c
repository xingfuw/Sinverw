#include <stdio.h>

int main(void) 
{
    char answer[100];
    printf("What is your name? ");
    scanf("%99s", answer);
    printf("Hello, %s!\n", answer);
}