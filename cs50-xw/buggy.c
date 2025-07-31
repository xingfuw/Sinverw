#include <stdio.h>

void print_column(int height);

int main(void) 
{
    int h;
    printf("Height: ");
    scanf("%d", &h);
    print_column(h);
}

void print_column(int height) 
{
    for (int i = 0; i < height; i++) 
    {
        printf("#\n");
    }
}
// The function print_column prints a column of '#' characters based on the given height.