#include <iostream>

using namespace std;
/*
1) Escreva um programa que receba como entradas um número primo p < 100 e um número a ∈ Zp, e
forneça em sua saída uma raiz quadrada de a (mod p), isto é, um número b ∈ Zp, tal que b

2 ≡ a (mod p).
Depois, responda às perguntas a seguir (justifique todas as suas respostas com base nas simulações que
realizar e à luz de resultados associados aos chamados “resíduos quadráticos” módulo p):
a) É sempre que a raiz quadrada em questão existe? Explique.
b) Quando a raiz quadrada em questão existe, ela é única? Justifique.
*/
// Funções 

bool verificaCodicoes(int numero);
void numerosPrimosAte100();

//Programa Principal

    int main()
{
    int numeroPrimo;
    system("clear");
    numerosPrimosAte100();

    cout << "Digite um número primo: ";
    cin >> numeroPrimo;
    cout << numeroPrimo << "\n\n";

    while(!verificaCodicoes || numeroPrimo >= 100){
        cout << "Número informado não é PRIMO ou Maior que 100";
    }
    return 0;
}

void numerosPrimosAte100(){
    int cont = 0, resto;

    cout << "Números Primos: \n";

    for(int i = 2; i < 100; i++){
        for(int j = 1; j <= i; j++){
            resto = i % j;
            if(resto == 0){
                cont++;
            }
        }
        if(cont == 2){
            cout << i << " ";
        }
        cont = 0;
    }
    cout << "\n";

}

bool verificaSeEPrimo(int numero){
    bool estado;
    int cont = 0;
    int resto;

    for(int i = 1; i <= numero; i++){
        resto = numero % i;
        if(resto == 0){
            cont++;
        }
    }
    if(cont == 2){
        return true;
    }else{
        return false;
    }
}