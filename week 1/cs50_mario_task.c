
#include <cs50.h>
#include <stdio.h>

int fonk_mario(string mario);

int main(void)
{
    int n = fonk_mario("Heigt: ");
        int i,j,k;
    
    for(i=1 ; i<=n ; i++)
    {
        for(j=n ; j>i ; j--)
            printf(" ");

        for(k=0 ; k<i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
        }

int fonk_mario(string mario)
{
    int n;
    do
    {
        n = get_int("%s", mario);
    }
    while (n < 1||n > 8);
    return n;
}

