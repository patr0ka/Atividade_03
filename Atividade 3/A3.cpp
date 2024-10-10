#include <iostream>
using namespace std;

int main(){

    int num, valor;
    int *p;
    num = 55;
    p = &num;
    valor = *p;
    cout << valor << endl;
    cout << p << endl;
    cout << *p << endl;
}

 // A linha 10 imprimirá "55", já que a variavel "valor" recebeu o conteudo da variavel apontada por *p.
 // A linha 11 irá impirmir o endereço do ponteiro p em valores hexadecimais.
 // A linha 12 irá imprimir "55", que é o conteúdo da variavel apontada por *p.