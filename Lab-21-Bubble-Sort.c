#include<stdio.h>
#include<conio.h>
void bubble_sort(int[],int);
void main()
{
    int iarr[30],num,i;
    printf("\nEnter Number of Elements:");
    scanf("%d",&num);
    printf("\n Enter array Number:");
    for(i=0;i<num;i++)
        scanf("%d",&iarr[i]);

    bubble_sort(iarr,num);
    getch();

    }
void bubble_sort (int arr[],int num){
int i,j,k,temp;
printf("\nUnsorted Data:");
for(k=0;k<num;k++){
    printf("%5d",iarr[k]);
}
for(i=1;i<num;i++){
    for(j=0;j<num-1;j++){
        if(iarr[j]>iarr[j+1]){
            temp=iarr[j];
            iarr[j]=iarr[j+1];
            iarr[j+1]=temp;
        }
    }printf("\nAfter Pass %d: ",i);
    for(k=0;k<num;k++){
        printf(%5d",iarr[k]);
    }
}
}
