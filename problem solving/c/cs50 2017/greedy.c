#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int returned = 0;

    printf("How much change is owed?\n");
    float change = get_float();
    while(change < 0)
    {
        printf("How much change is owed?\n");
        change = get_float();
    }

    int am = round(change * 100);

    while(am > 0)
    {
       if((am - 25) >= 0)
       {
          am = am - 25;
          returned++;
       }
       else if((am - 10) >= 0)
       {
          am = am - 10;
          returned++;
       }
       else if((am - 5) >= 0)
       {
          am = am - 5;
          returned++;
       }
       else if((am - 1) >= 0)
       {
          am = am - 1;
          returned++;
       }
    }
    printf("%i\n", returned);
}