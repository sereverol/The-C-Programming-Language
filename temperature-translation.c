#include <stdio.h>

void TemperatureConversion(char startingScale ,int max)
{
    if(startingScale == 'f')
        for (int i = max; i >= 0; i -= 20) printf("%2dF\t%2dC\n", i, ((5) * (i-32) /9));
    else if(startingScale == 'c')
        for (int i = max; i >= 0; i -= 20) printf("%2dC\t%2dF\n", i, ((i * (9/5)) + 32));

}

int main (void) {
    printf("Please state what temperature scale it'll transform from (f or c) :\n");

    char scale = getchar();

    for(int i = 0; i < 10; i++) putchar('-');
    if(scale == 'f')
        printf("\tFahrenheit to Celsius\t");
    else if(scale == 'c')
        printf("\tCelsius to Fahrenheit\t");
    for(int i = 0; i < 10; i++) i == 9 ? printf("-\n") : putchar('-');

    TemperatureConversion(scale, 300);

    return 0;
}
