/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */

/* Wenn wir alle natürlichen Zahlen unter 10 auflisten, die Vielfache von 3 oder 5 sind, erhalten wir 3, 5, 6 und 9. Die Summe dieser Vielfachen ist 23.
Finde die Summe aller Vielfachen von 3 oder 5 unter 1000. */

#include <stdio.h>

int main(void)

{
    int i, sum = 0;

    for(i = 0; i<1000; i++)
    {
        if(i%3==0||i%5==0)
            sum=sum+i;
    }

    printf("%d\n", sum);

    return 0;
}

/*233168*/
