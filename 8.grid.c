#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n = get_int("what size do you want your pattern to be: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}