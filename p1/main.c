#include <stdio.h>

int main(void)
{
    int N, change;
    bool buy = false;
    
    scanf("%d", &N);
    change=N;
    
    for (int i=1; N/(900*i)>0; i++) {
        for (int j=2; N/(750*j)>0; j+=2) {
            for (int k=1; N/(200*k)>0; k++) {
                
                change = N - (900*i + 750*j + 200*k);
                
                if (change==0 && (k<i||k<j)) {
                    buy = true;
                    printf("%d %d %d\n", i, j, k);
                }
                
            }
            
        }
        
    }
    
    if (!buy) printf("None\n");

    return 0;
}
