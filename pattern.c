//Program to print a pyramid of numbers

#include<stdio.h>
#include<conio.h>
void main()
{
    //Declaring the variables
    int x, s, n,  y = 0, cntr = 0, cntr1 = 0;

    //Asking for number of inputs
    printf("Enter the number of rows to show number pattern: ");
    scanf("%d",&n);

    //loop code
    for(x = 1; x <= n; ++x)
    {
        for(s = 1; s <= n-x; ++s)
        {
            printf("  ");
            ++cntr;
        }
        while(y != 2 * x - 1)
        {
            if (cntr <= n - 1)
            {
                printf("%d ", x + y);
                ++cntr;
            }
            else
            {
                ++cntr1;
                printf("%d ", (x + y - 2 * cntr1));
            }
            ++y;
        }
        cntr1 = cntr = y = 0;
        printf("\n");
    }
}
