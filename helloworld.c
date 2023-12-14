#include <stdio.h>
#include <unistd.h>

int main(void)
{
    unsigned char var = 0;
    while(1)
    {
        printf("Hello from git 1.1 %d\r\n", var++);
        usleep(100000);
    }
}
