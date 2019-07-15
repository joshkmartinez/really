// https://www.learn-c.org
#include <stdio.h>

int half(int i)
{
    return i / 2;
}

void thing(int i)
{
    if (i > 10)
    {
        printf("%d\n", i);
        return;
    }
    else
    {

        printf("%d\n", i - 10);
        return;
    }
}

int main()
{
    int name[100];

    thing(3);

    return 0;
}