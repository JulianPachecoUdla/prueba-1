#include <stdio.h>

float calcmontototal(float monto, int meses) {
    return monto * meses;
}

float calcintereses(float monto, float tasainteres, int meses) {
    return monto * tasainteres * meses;
}

void tabla(float monto, float interes, int meses) {
    printf("MES\tAHORRO\tINTERES\tAHORRO+INTERES\n");
    for (int i = 1; i <= meses; i++) {
        float montototal = calcmontototal(monto, i);
        float totalinteres = calcintereses(monto, interes, i);
        printf("%d\t%.2f\t%.2f\t%.2f\n", i, montototal, totalinteres, montototal + totalinteres);
    }
}

int main() {
    int meses;
    float monto, tasainteres;

    printf("Ingrese el total de meses: ");
    scanf("%d", &meses);
    if (meses <= 0) {
        do {
            printf("\nIngrese un valor correcto: ");
            scanf("%d", &meses);
        } while (meses <= 0);
    }

    printf("Ingrese el monto: ");
    scanf("%f", &monto);
    if (monto <= 0) {
        do {
            printf("\nIngrese un valor correcto: ");
            scanf("%f", &monto);
        } while (monto <= 0);
    }

    printf("Ingrese la tasa de interes: ");
    scanf("%f", &tasainteres);

    printf("tabla:\n");
    tabla(monto, tasainteres, meses);

    return 0;
}