#include <iostream>
using namespace std;

int main(){
    int i, *p_contador;
    i = 5;
    p_contador = &i;
    cout << *p_contador << endl;
    cout <<  p_contador << endl;
}
// A linha 8 irá escrever "5", já que a instrução "cout << *p_contador" faz com que
// seja impresso o conteudo que o vetor esta apontando, nesse caso o i.

// A linha 9 irá imprimir o endereço do vetor em si em valores hexadecimais.