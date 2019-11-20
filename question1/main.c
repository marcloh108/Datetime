#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    struct tm first = {.tm_mday=1};
    mktime(&first);
    printf("\n%s\n", asctime(&first));
}
