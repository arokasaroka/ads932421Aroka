#include <stdio.h>
int main()
{
    puts("Все 3-хзначные числа, в которых нет одинаковых цифр: ");
    int a, b, c;
    for (a = 1; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (c = 0; c <= 9; c++)
            {
                if ((a != b) && (b != c) && (a != c))
                    printf("%d%d%d ", a, b, c);
            }
        }
    }
}