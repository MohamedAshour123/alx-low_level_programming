#include <stdio.h>

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
}
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}

int main(void)
{
int number;
printf("Enter a number: ");
scanf("%d", &number);
positive_or_negative(number);
return (0);
}
