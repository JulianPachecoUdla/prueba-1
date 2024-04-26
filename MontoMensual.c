#include <stdio.h>
float calcmontototal(float monto, float montototal, int meses){
    montototal=monto*meses;
    return montototal;
}
float calcintereses(float monto, float tasainteres, int meses){
    return monto * tasainteres /meses;
}
void tabla(float monto, float interes, int meses, int ahorroeintereses){
    printf("MES\tAHORRO\tINTERES\tAHORRO+INTERES");
    for (int i =1; i<=meses; i++){
        float montototal = calcmontototal(monto, i);
        float totalinteres =calcintereses(monto, interes, i);
        printf("%d\t%.2f\t%.2f\t%.2f\n", i, monto, interes, ahorroeintereses);
    }
}

int main(){
    int meses, contador =0, i;
    float monto, interes, ahorroeintereses, montototal=0, tasainteres=0.07, tasaimpuestorenta=0.02;
    printf("Ingrese el total de meses: ");
    scanf("%d",&meses);
    if(meses<=0){
        do{
            printf("\nIngrese un valor correcto: ");
            scanf("%d", &meses);
        }while(meses<=0);
    }
    printf("Ingrese el monto: ");
    scanf("%f", &monto);
    if(monto<=0){
        do{
            printf("\nIngrese un valor correcto: ");
            scanf("%f", &monto);
        }while(monto<=0);}
    do{
        montototal=montototal+monto;
        contador++;
    } while (contador<meses);
    printf("El monto total es: %.2f", montototal);
    printf("\ntabla:\n");
    tabla(i, monto, interes, ahorroeintereses);
}