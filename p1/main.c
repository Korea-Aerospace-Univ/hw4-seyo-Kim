#include <stdio.h>

int main(void)
{
    int a, t, trial = 0;
    
    scanf("%d\n", &a);
    
    do {
        scanf("%d", &t);
        trial++;
        
        if (t > a) {
            printf("%d>?\n", t);
        }
        else if (t < a) {
            printf("%d<?\n", t);
        }
        else {
            printf("%d==?", t);
        }

    } while(a != t);

    printf("\n%d", trial);
    
    return 0;
}
