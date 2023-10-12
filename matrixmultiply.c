#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter row of first matrix:");
    scanf("%d",&r1);
        printf("Enter column of first matrix:");
    scanf("%d",&c1);
        printf("Enter row of second matrix:");
    scanf("%d",&r2);
        printf("Enter column of second matrix:");
    scanf("%d",&c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    int arr3[r1][c2];
    if(c1==r2){
        for(int i=0; i<r1;++i){
            for(int j=0;j<c1;++j){
                printf("Enter element of first matrix at %d,%d::",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        for(int i=0;i<r2;++i){
            for(int j=0;j<c2;++j){
                printf("Enter element of second matrix at %d,%d::",i,j);
                scanf("%d",&arr2[i][j]);
            }
        }
        for(int i=0;i<r1;++i){
            for(int j=0;j<c2;++j){
                arr3[i][j]=0;
            }
        }
        for(int i=0;i<r1;++i){
            for(int j=0;j<c2;++j){
                for(int k=0;k<c1;++k){
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<r1;++i){
            for(int j=0;j<c2;++j){
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiplication not possible");
    }
    return 0;

}
