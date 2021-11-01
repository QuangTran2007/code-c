#include<stdio.h>
int main(){
    float a,b,x;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    
    if(a!=0){
        x=-b/a;
        printf("nghiệm là=%.2f",x);
    }else{
        if(b==0){
            printf("vô nghiệm");
        }else{
            printf("vô số nghiệm");
        }
        }
}
