#include <stdio.h>
 
#define N 10
 
/**
 * @brief Realiza a leitura de cada número que irá compor a matriz;
 * 
 * @param mat Matriz a ser montada.
 * @param n Numero de linhas e colunas.
 */
void le_mat (int mat[][N], int n);
 
int main(){
    int i, k, n;
    int mat[N][N];
    scanf("%d", &n);
    if (n>10 || n<1){
        printf("dimensao invalida\n");
        return 0;
    }
    le_mat(mat, n);
    for (i=0; i<n ; i++){
        for(k=0 ; k<n ; k++){
            if (mat[i][k] != mat[k][i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        } 
    }
    for (i=n-1; i>=0 ; i--){
        for(k=n-1 ; k>=0 ; k--){
            if (mat[i][k] != mat[k][i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        } 
    }
    printf("bissimetrica\n");
    return 0;
}
 
void le_mat (int mat[][N], int n){
    int i, k;
    for (i=0; i<n; i++)
        for (k=0; k<n; k++)
            scanf("%d", &mat[i][k]);
}