
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("number is %d : positive", num);
    }
    else if (num < 0)
    {
        printf("number is %d : negative", num);
    }
    else
    {
        printf("number is %d : zero", num);
    }

    return 0;
}


