#include <stdio.h>
#include "libs/minhalib.h"

int main(void)
{
    int x = foo();
    int y = bar();
    int z = baz();

    printf("%d %d %d\n", x, y, z);
    return 0;
}
