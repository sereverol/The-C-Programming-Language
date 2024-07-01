#include <stdio.h>

void fahrtocels (int max_fahr)
{
    for (int i = 0; i <= max_fahr; i += 20) printf("%2dF\t%2dC\n", i, ((5) * (i-32) /9));
}

int main (void) {

    fahrtocels(300);

    return 0;
}
