
#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char novonome[100];
    
    printf("Digite um nome:");
    scanf("%s",&nome);
    
    int i=0;
    int quant = strlen(nome);
    
    for(i=0; i<quant; i++){
        novonome[i]=nome[quant-(i+1)];
    }
    novonome[quant]='\0';
    
    printf("Nova string: %s\n", novonome);
    
    return 0;
}
