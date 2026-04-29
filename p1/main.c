#include <stdio.h>

int main(void)
{
    int N, money;
    bool buy = false;
    
    scanf("%d", &N);
    
    for (int i=1; N>=(900*i); i++) {
        for (int j=2; N>=(750*j); j+=2) {
            for (int k=1; N>=(200*k); k++) {
                money=900*i+750*j+200*k;
                if ((N==money) && (k<i||k<j)) {
                    buy = true;
                    printf("%d %d %d\n", i, j, k);
                }
                
            }
            
        }
        
    }
    
    if (!buy) printf("none\n");

    return 0;
}
