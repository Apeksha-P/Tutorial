#include<stdio.h>
#define maxrow 2
#define maxcol 3
void main(){
    int a[maxrow][maxcol];
    int b[maxrow][maxcol];
    int c[maxrow][maxcol];
    int row,col;
    printf("\t.........----------...........\n \n");
    printf("Read two tables of integers calculate the sums of the corresponding elements \n \n ");
    for(row=0;row<maxrow;row++){
        printf("Enter values for table a row %d : \n",row+1);
        for(col=0;col<maxcol;col++){
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<maxrow;row++){
        printf("Enter values for table b row %d : \n",row+1);
        for(col=0;col<maxcol;col++){
            scanf("%d",&b[row][col]);
        }
    }
    printf("\n \nSum of two tables:\n");
    for(row=0;row<maxrow;row++){
        for(col=0;col<maxcol;col++){
            c[row][col]=a[row][col]+b[row][col];
            printf("%d \t",c[row][col]);
        }
        printf("\n");
    }
}
