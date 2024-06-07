#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    int r;
    int c;
    int s;

    h = get_int("Enter height: ");
    while (h<1 || h>8)
    {
        h=get_int("Enter height: ");
    }
    while (h<1 || h>8);

    for ( r=0; r<h; r++)
    {
        for (s=0; s<h-r-1; s++)
        {
            printf(" ");
        }
        for ( c=0; c<=r; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}