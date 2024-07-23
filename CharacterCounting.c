#include <stdio.h>

int main(void)
{
    for(double nc = 0; getchar() != EOF; ++nc){
        printf("%0.f\n", nc);
    }

    return 0;
}
