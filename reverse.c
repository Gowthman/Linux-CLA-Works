//TO display all the cla in Reverse order
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = argc - 1; i >= 1; i--)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
