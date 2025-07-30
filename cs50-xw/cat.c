# include <stdio.h>

int get_positive_int(void); // Function declaration
void meow(int n); // Function declaration

int main(void)
{
    int times = get_positive_int(); // Function call
    meow(times); // Function call
}




int get_positive_int(void)
{
    int n;
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } 
    while (n < 1);
    return n;
}   

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {printf("meow\n");
    }    
}