#include <cs50.h>
#include <stdio.h>
int main(void)
{
     printf("Minutes: ");
     int Minutes = get_int();
     printf("Bottles: %i\n",Minutes * 12 );
}