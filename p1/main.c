#include <stdio.h>

int main(void)
{
    int a, t, trial = 0;
    
    scanf("%d\n", &a);
    
    do {
        scanf("%d", &t);
        
        if (t > a) {
            printf("%d>?\n", t);
            trial ++;
        }
        else if (t < a) {
            printf("%d<?\n", t);
            trial ++;
        }
        else {
            printf("%d==?", t);
            trial ++;
        }

    } while(a != t);

    printf("\n%d", trial);
    
    return 0;
}
