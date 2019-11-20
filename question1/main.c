#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    wchar_t buff[40];
    struct tm mytime = { .tm_year=116,
                         .tm_mon=8,
                         .tm_mday=2,
                         .tm_hour=17,
                         .tm_min=51,
                         .tm_sec=10
};

    printf("\n The textual representation of specified date and time :\n");
    if(wcsftime(buff, sizeof buff, L"%A %c", &mytime))
    {
        printf("\n%ls\n", buff);
    }
    else
    {
        puts("wcsftime failed");
    }
    setlocale(LC_ALL, "en_US.UTF-8");
    if (wcsftime(buff, sizeof buff, L"%A %c", &mytime))
    {
        printf("%ls\n\n", buff);
    }
    else
    {
        puts("wcsftime failed");
    }
}
