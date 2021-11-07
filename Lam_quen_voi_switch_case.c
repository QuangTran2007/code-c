#include"stdio.h"
int main(){
    int a,b;
    printf("nhap thang:");
    scanf("%d",&a);
    printf("nhap nam:");
    scanf("%d",&b);
    
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("thang co 31 ngay");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("thang co 30 ngay");
        break;
        case 2:
        if((b%400==0) || (b%4==0 && b%100!=0)){
        printf("thang 2 co 29 ngay");
        }else{
            printf("thang 2 co 28 ngay ");
            break;
        }
        default:
        printf("xin loi thang vua nhap ko phu hop");
        break;
    }
}
