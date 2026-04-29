#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int N, change;
    bool buy = false;
    
    scanf("%d", &N);
    change=N;
    
    for (int i=0; N/(900*i)>0; i++) {
        i++;
        for (int j=0; N/(750*j)>0; j++) {
            j+=2;
            for (int k=0; N/(200*k)>0; k++) {
                k++;
                
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
