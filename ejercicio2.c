#include <stdio.h>

  void CalcPrestamo() {
    float prestamo_original, tasaInteres, interes, pagoCapital;
    int anios, i;
    printf("Ingrese monto del credito: ");
    scanf("%f", &prestamo_original);
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &tasaInteres);
    printf("Ingrese el numero de anos: ");
    scanf("%d", &anios);
    tasaInteres = tasaInteres / 100;
    pagoCapital = prestamo_original / anios;
    printf("\nAnio\tCapital a Pagar\tIntereses a Pagar\tCuota Mensual Anual\n");
    float saldo = prestamo_original, totalIntereses = 0;
    for (i = 1; i <= anios; i++) {
      interes = saldo * tasaInteres;
      saldo -= pagoCapital;

      printf("%d\t%.2f\t\t%.2f\t\t\t%.2f\n", i, pagoCapital, interes,
             (pagoCapital + interes) / 12);

      totalIntereses = totalIntereses + interes;
    }
    printf("Total intereses: %.2f\n", totalIntereses);
  }
void CalcAhorro() {
  float montoMensual, tasaInteresAnual, tasaInteresMensual, interes,
      montoAcumulado = 0;
  int meses, i;
  printf("Ingrese el monto mensual: ");
  scanf("%f", &montoMensual);
  printf("Ingrese la tasa de interes anual: ");
  scanf("%f", &tasaInteresAnual);
  printf("Ingrese la cantidad de meses: ");
  scanf("%d", &meses);
  tasaInteresMensual = (tasaInteresAnual / 12) / 100;
  printf("\nahorro\tinteres\ta+I\n");
  float ahorroTotal = 0;
  for (i = 0; i < meses; i++) {
    montoAcumulado += montoMensual;
    interes = montoAcumulado * tasaInteresMensual;
    montoAcumulado += interes; //
    ahorroTotal += montoMensual;
    printf("%.2f\t%.2f\t%.2f\n", ahorroTotal, interes, montoAcumulado);
  }
  printf("El monto ahorrado es: %.2f\n", ahorroTotal);
  printf("El total de intereses es: %.2f\n", montoAcumulado - ahorroTotal);
  printf("El monto acumulado es: %.2f\n", montoAcumulado);
}
int main() {
  int opcion;
   printf("Seleccione una opcion:\n1. Calcular credito "
      "\n2. Calcular ahorro\n");
  scanf("%d", &opcion);
  switch (opcion) {
    case 1:
      CalcPrestamo();
      break;

    case 2:
      CalcAhorro();
    break;
    default:
    printf("Opcion invalida");
    break;
  }
  return 0; 
}