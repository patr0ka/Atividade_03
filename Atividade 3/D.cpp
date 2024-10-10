//1. Declare a variável fP como um ponteiro para uma variável do tipo float.
//2. Atribua o endereço da variável numero1 à variável de ponteiro fP.
//3. Mostre o valor do objeto apontado por fP.
//4. Atribua o valor do objeto apontado por fP à variável numero2.
//5. Mostre o valor de numero2.
//6. Mostre o endereço de numero1. (Se usar printf, use o formato %p.)
//7. Mostre o endereço armazenado em fP. Use o especificador de formtato %p.
//O valor impresso é o mesmo que o endereço de numero1?


#include <iostream>
using namespace std;

int main(){
    float num1 = 7.3, num2;
    float *fp; // 1º
    fp = &num1; // 2º
    cout << *fp << endl; // 3º
    num2 = *fp; // 4º
    cout << num2 << endl; // 5º
    cout << &num1 << endl; // 6º
    cout << fp << endl; // 7º
}

// Sim, a saída é a mesma, já que na linha 17, o ponteiro fp armazenou o endereço de num1.