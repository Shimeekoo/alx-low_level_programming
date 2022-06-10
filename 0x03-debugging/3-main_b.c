#include <stdio.h>

/**
 * leap year condition
 * Returns 0
 */

int main ()
{
	int year;
	year = 02/29/2000;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{ 
			 if(year % 400 == 0)
				 printf("%d is a leap year.", year);
			 else
				 printf("%d is not a leap year.", year);
		}
		else
			printf("%d is a leap year.", year);
	}
	else 
		 printf("%d is not a leap year.", year);


return 0;
}
