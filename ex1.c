#include <stdio.h>

#define N 100

/**
 * @brief Essa função lê um vetor de n números inteiros que formam um conjunto válido.
 * A função lê uma sequência de números até encontrar uma quantidade de n números únicos.
 * 
 * @param vect vect vetor de números inteiros.
 * @param n n quantidade de números únicos a serem lidos.
 * @return o vetor vect é preenchido com números não repetidos
 */
void le_conjunto( int * vect, int n );

int main(){
    int vect[N], n, i;
    scanf("%d", &n);
    if (n>100 || n<=0) return 0;
    else le_conjunto( vect, n);
    printf("(");
    for (i=0; i<n; i++){
        if (i==n-1) printf("%d", vect[i]);
        else printf("%d,", vect[i]);
    }
    printf(")\n");
    return 0;
}

void le_conjunto( int * vect, int n ){
    int k=0, j, z, l;
    while (k<n){
        scanf("%d", &z);
        j=0;
        for(l=0;l<k;l++){
            if (z==vect[l]){
                j=1;
            }
        }
        if (j==0){
            vect[k] = z;
            k++;
        }
    }
}