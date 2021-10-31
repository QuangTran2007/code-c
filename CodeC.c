#include<stdio.h>
int main(){
    printf("nhap vao he so cua phuong trinh ax+b=0");
    float a,b,x;
    printf("\nnhap vao he so cua a=");
    scanf("%f",&a);
    printf("\nnhap vao he so cua b=");
    scanf("%f",&b);
    
    // phần if else 
    if (a!=0){
      x = -b/a;
      printf("\nphuong trinh co nghiem x=%.2f",x);
      } else{
        if (b==0){
        printf("\nphuong trinh co vo so nghiem");
        } else{
          printf("\nphuong trinh vo nghiem");
        }
    }
}
