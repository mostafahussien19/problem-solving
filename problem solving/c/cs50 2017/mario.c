#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int height = get_int("enter the height : ");
    int j ;
    for(int i = 0; i<height;i++)
    {
        for(int k = 0; k<height  - i;k++)
        {
            printf(" ");
        }
        for( j = 0; j < i+1  ;j++)
        {
            
            printf("#");
        }
        printf("    ");
        for( int q  = 0; q < i+1  ;q++)
        {
            
            printf("#");
        }
        printf("\n");
    }
}
