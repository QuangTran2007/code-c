#include<stdio.h>
int main(){
    int a;
    int b;
    printf("tinh so tuoi cua ban");
    printf("\nnhap vao nam sinh cua ban:");
    scanf("%d",&a);
    printf("nhap vao nam hien tai:");
    scanf("%d",&b);
    
    int tuoi=b-a;
    printf("so tuoi cua ban la:%d",tuoi);
    
    if(a%2==0){
        printf("\n %d la nam nhuan",a);
    }else{
        printf("\n %d la nam ko nhuan",a);
    }
}
