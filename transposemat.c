#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter row of matrix:");
    scanf("%d",&r1);
        printf("Enter column of matrix:");
    scanf("%d",&c1);
    int arr1[r1][c1];
    int arr2[c1][r1];
        for(int i=0; i<r1;++i){
            for(int j=0;j<c1;++j){
                printf("Enter element of first matrix at %d,%d::",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
                for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                arr2[j][i]=arr1[i][j];
             
            }
        }
        printf("''Original Matrix''\n");
            for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("\n");
        }
        printf("''Transpose Matrix''\n");
        for(int i=0; i<c1;i++){
            for(int j=0;j<r1;j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }
    return 0;
}