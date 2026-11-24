#include <iostream> // Libreria para entrada y salida (cin, cout)
using namespace std; // Directiva std declarada de forma GLOBAL

int main() { // Funcion principal donde inicia el programa
    int a, b; // Dos numeros enteros que ingresa el usuario

    cout << "Ingrese el primer numero: "; // Pide el primer numero
    cin >> a; // Lee el primer numero
    cout << "Ingrese el segundo numero (distinto de 0): "; // Pide el segundo numero
    cin >> b; // Lee el segundo numero

    if (cin.fail()) { // CONDICIONAL SIMPLE (if): restriccion, solo se aceptan numeros
        cout << "Error: solo se permiten numeros enteros." << endl; // Mensaje de error
        return 1; // Termina el programa con error
    } // Cierra el if simple

    if (b == 0) { // CONDICIONAL DOBLE (if...else): restriccion, el segundo numero no puede ser 0
        cout << "Error: no se puede dividir entre cero." << endl; // Mensaje de error
        return 1; // Termina el programa con error
    } else { // Si el segundo numero es distinto de cero
        cout << "Datos validos." << endl; // Confirma que los datos son correctos
    } // Cierra el if...else

    cout << "Suma: " << a + b << endl; // Operacion aritmetica: suma
    cout << "Resta: " << a - b << endl; // Operacion aritmetica: resta
    cout << "Multiplicacion: " << a * b << endl; // Operacion aritmetica: multiplicacion
    cout << "Division: " << (double)a / b << endl; // Operacion aritmetica: division con decimales
    cout << "Modulo: " << a % b << endl; // Operacion aritmetica: modulo (residuo)

    if (a > b) { // CONDICIONAL MULTIPLE (if-else if-else): el primero es mayor
        cout << "El primer numero es mayor." << endl; // Mensaje si a > b
    } else if (a < b) { // El segundo es mayor
        cout << "El segundo numero es mayor." << endl; // Mensaje si a < b
    } else { // Son iguales
        cout << "Los numeros son iguales." << endl; // Mensaje si a == b
    } // Cierra el if-else if-else

    switch (a % 2) { // CONDICIONAL SWITCH-CASE: revisa si el primer numero es par o impar
        case 0: // Si el residuo es 0
            cout << "El primer numero es par." << endl; // Mensaje par
            break; // Sale del switch
        default: // Si el residuo no es 0
            cout << "El primer numero es impar." << endl; // Mensaje impar
            break; // Sale del switch
    } // Cierra el switch

    return 0; // Fin del programa sin errores
} // Cierra la funcion main
    
