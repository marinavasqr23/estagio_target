#include <stdio.h>

int main() {
    int num1=0, num2=1;
    int fibo;
    int num;
    printf("Digite um número:");
    scanf("%d",&num);
    fibo=num1+num2;
    while(fibo<=num){
        if(fibo==num){
            printf("Pertence a sequencia");
        }
        num1=num2;
        num2=fibo;
        fibo=num1+num2;
        
    }
    printf("Não pertence");
    return 0;
}
