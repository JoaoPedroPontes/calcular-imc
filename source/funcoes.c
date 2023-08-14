#include <stdio.h>
#include <stdlib.h>

void exibir_classificacao(float imc) {
  printf("Seu imc é %.2f\n",imc);

  if(imc < 18.5){
    printf("Você está abaixo do peso normal\n");
  }else if(imc >= 18.5 && imc <= 24.9){
    printf("Você está com o peso normal\n");
  }else if(imc >= 25 && imc <= 29.9){
    printf("Você está com excesso de peso\n");
  }else if(imc >= 30 && imc <= 34.9){
    printf("Você está com Obesidade classe I\n");
  }else if(imc >= 35 && imc <= 39.9){
    printf("Você está com Obesidade classe II\n");
  }else {
    printf("Você está com Obesidade classe III\n");
  }
}


float calculo_imc(float peso, float altura){
  return peso/(altura*altura);
}

void pegar_dados(){
  float peso,altura;

  printf("Digite seu peso: ");
  scanf("%f",&peso);
  printf("Digite sua altura: ");
  scanf("%f",&altura);

  exibir_classificacao(calculo_imc(peso,altura));
}
