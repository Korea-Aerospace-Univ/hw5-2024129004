#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int N, A=0, B=0, C=0, change;
    bool buy = false;
    
    scanf("%d", &N);
    change=N;
    
    for (int i=1; N/(900*i)>0; i++) {
        A++;
        for (int j=1; N/(1500*j)>0; j++) {
            B+=2;
            for (int k=1; N/(200*k)>0; k++) {
                C++;
                
                change = N - (900*A + 750*B + 200*C);
                
                if (change==0 && (C<A||C<B)) {
                    buy = true;
                    printf("%d %d %d\n", A, B, C);
                }
                
            }
            
        }
        
    }
    
    if (!buy) printf("None\n");

    return 0;
}
