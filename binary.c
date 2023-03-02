#include <stdio.h>
void binary(int a)
{
    int b[32], i = 0;
    while (a)
    {
        b[i] = a % 2;
        a = a / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    printf("HII");
}
int main()
{
    int a;
    printf("Please enter the no to find binary\n");
    scanf("%d", &a);
    binary(a);
}