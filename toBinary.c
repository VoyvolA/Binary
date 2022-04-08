#include <stdio.h>

void    toBin(char *str, int num, int *index)
{
    if (num)
    {
        toBin(str, num / 2, index);
        str[(*index)] = (num % 2) + 48;
        (*index)++;
        str[(*index)] = '\0';
    }
}

int main()
{
    char str[100];
    int index = 0;
    toBin(str, 101, &index);
    printf("%s", str);

    return 0;
}
/*                
example:
e for ascii code: 101
e for binary: 01100101
101/(2^0) = 101 (odd)(tek) => 1
101/(2^1) = 50  (even)(çift) => 0
101//(2^2) = 25 (odd)(tek) => 1
101/(2^3) = 12 (even)(çift) => 0
101/(2^4) = 6 (even)(çift) => 0
101/(2^5) = 3 (odd)(tek) => 1
101/(2^6) = 1 (odd)(tek) => 1
E for ascii cod: 69
E for binary: 01000101
*/
