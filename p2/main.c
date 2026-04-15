#include <stdio.h>

int main(void)
{
    char C;
    
    int N;
    int cE = 0, tE = 0;
    int cN = 0, tN = 0;
    
    scanf("%d", &N);
    
    for (int i=0; i<N; i++) {
        
        scanf("%c", &C);
        
        if (C >='a' && C <='z') {
            cE++;
            cN=0;
            
            if(cE> tE) {
                tE=cE;
            }
        }
        
        else if (C >='0' && C <='9') {
            cN++;
            cE=0;
            
            if(cN> tN) {
                tN=cN;
            }
        }
        
        else {
            cE=0;
            cN=0;
        }
    }
    
    printf("%d\n", tE);
    printf("%d", tN);
            
    return 0;
}
