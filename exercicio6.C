#include <stdio.h>
#include <stdint.h>

typedef uint8_t byte;
typedef int inteiro;
typedef float real;

int main() {
    byte idade = 18;
    inteiro quantidade = 30;
    real nota = 8.5;

    printf("Idade: %u\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Nota: %.2f\n", nota);

    return 0;
}
