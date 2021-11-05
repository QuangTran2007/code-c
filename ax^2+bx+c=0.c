//giải phương trình bậc hai 
//phương trình ax^2+bx+c=0 
#include"stdio.h"
#include"math.h"
int main(){
    // khai báo
    float a,b,c,x1,x2,delta;
    // nhập dữ liệu
    printf("nhập vào a=");
    scanf("%f",&a);
    printf("nhập vào b=");
    scanf("%f",&b);
    printf("nhập vào c=");
    scanf("%f",&c);
    // tính toán
    if(a==0){
        printf("\nnhâp hệ số a khác 0");
    }else{// khi này a đã khác 0
    delta=pow(b, 2)-4*a*c;
        if(delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("\nphương trình có nghiệm phan biệt x1=%.2f \n x2=%.2f",x1,x2);
        }else if(delta==0){
            x1=-b/(2*a);
            printf ("\nphương trình có nghiệm kép x1=x2=%.2f ",x1);
        }else{
            printf("\nphương trình vô nghiệm");
        }
    }
}
