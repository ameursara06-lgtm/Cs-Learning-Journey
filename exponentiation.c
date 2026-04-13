#include<stdio.h>
double power(double x,int n){
    double result=1.0;
    int i;
    if (n>=0){
        for (i=0;i<n;i++){
            result*=x;
        }
    }
    else{
        for (i=0;i<-n;i++){
            result*=x;
        }
        result=1.0/result;
    }
    return result;
}
int main(){
    double base ;
    int exp;
    printf("Enter the base: ");
    scanf("%lf",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exp);
    double result=power(base,exp);
    printf("%.2lf %d = %.2lf\n",base,exp,result);
    return 0;
}