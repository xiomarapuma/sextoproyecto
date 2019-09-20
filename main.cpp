Problem 1. [5 puntos] [Fuente: Projecteuler.net. Problem 1] Si se imprimiera todos los
n´umeros naturales menores que 10, los cuales sean multiplos de 3 o 5, obtendrıamos: 3, 5, 6, 9.
La suma de estos multiplos es 23.
Encontrar la suma de todos los m´ultiplos de 3 o 5 menores a 1000000.
Problem 2. [5 puntos] Escribir una funci´on que recibe un entero y retorna el entero invertido. Por ejemplo, dado el numero 7631, la funci´on debe retornar 1367.
Problem 3. [5 puntos] Escribir una funci´on recursiva power( base, exponent ) la cual, cuando se invoque, debe retornar baseexponente
Por ejemplo, power( 3, 4 ) = 3 * 3 * 3 * 3.
Asuma que exponent es un entero mayor o igual que 1.
Problem 4. [5 puntos] Implemente dos funciones que encuentre el fibonacci de un n´umero,
una de la forma iterativa o otra de la forma recursiva.

#include <iostream>

using namespace std;
int fibonacciRec(int num){
    if((num==1)||(num==2)){
        return 1;
    }
    else{
        return fibonacciRec(num-1)+fibonacciRec(num-2);
    }
}

int fibonacci2(int numero){
    int a=0,b=1,c;
    for(int i=0;i<numero -1;i++)
      {
          c=a+b;
          a=b;
          b=c;
      }
    return c;
}

int power( int base, int exponente){
    int i=1;
    for( i=1; exponente >0 ;exponente--){
        i*=base;
    }
    return i ;
}
int invertido(long numero){
    int digito ;
    while( numero >= 10) {
    digito = numero % 10;
    cout << digito ;
    numero /= 10;

    }
    return numero;

}
long long mult(long long x){

    int suma=0;
    for(int i=3 ;i < x;i++)
        if (i%3==0  ||  i%5==0){
            suma=suma+i;
        }
    return suma;
}
int main()
{
    //EJERCICIO 1

    //cout << "EJERCICIO 1 : " <<mult(1000000) << endl ;
    //cout << "EJERCICIO 2 RECURSIVO : " <<fibonacciRec(6) << endl ;
    //cout << "EJERCICIO 3 POTENCIA : " << power(2,2) << endl ;
    //cout << "EJERCICIO 4 ITERATIVO : " <<fibonacci2(6)<< endl ;
    cout << "EJERCICIO 5 INVERTIDO : " ;
    cout << invertido(1354) << endl ;
    return 0;
}
