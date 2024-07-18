#include <stdio.h>

//ex 1-6 & 1.7
int main(void)
{
    int c;

    while( (c = getchar()) != EOF){
        if( (c != EOF) == 1){
        }
            printf("%d", (getchar() != EOF));
            putchar(c);

    }

    return 0;
}
