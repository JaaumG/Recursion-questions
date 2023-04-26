#include <stdio.h>

//1
void oddNumberGenerator(int num, int quantity){
    if(quantity>0){
        if(num%2==0){
            num+=1;
        }
        printf("%d\n", num);
        oddNumberGenerator(num+=2, quantity-=1);
    }
}

//2
void quadradictNumberGenerator(int num, int quantity){
    if(quantity>0){
        printf("%d\n", num*num);
        quadradictNumberGenerator((num*num)+1, quantity-=1);
    }
}

//3
double numExpo(double num, int expo){
    if(expo == 1){
        return num;
    }
    return num * numExpo(num, expo-=1);
}

//4
double montante(double valorInicial, double taxaEmPorcentagem, int meses){
    if(meses==1){
        return valorInicial* taxaEmPorcentagem;
    }
    return taxaEmPorcentagem * montante(valorInicial, taxaEmPorcentagem, meses-1);
}

int main() {
    //oddNumberGenerator(2, 10);
    quadradictNumberGenerator(1, 5);
    //printf("%.2f\n",numExpo(2,4));
    //printf("%.2f\n", montante(1000, 1.01, 12));
    return 0;
}
