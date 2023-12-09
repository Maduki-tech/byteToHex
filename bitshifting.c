#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a = 00000001; 
    int b = a >> 4;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return EXIT_SUCCESS;
}
