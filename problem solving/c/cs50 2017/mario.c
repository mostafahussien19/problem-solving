#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int x = 0;
	do {
		printf("Height:");
		x = get_int();
        if (x == 0)
        {
            return 0;
        }
	} while (x < 1 || x > 23);

	for(int i = 0; i < x; i++)
	{
        for(int r = 0; r < x-i-1; r++)
        {
            printf("%s", " ");
        }
		for(int y = 0; y < i+2; y++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}