

/*
 Faz o condicional de qual classificao de encaixa o imc que foi concedido
*/
void exibir_classificao(float imc);

/*
 Calcula o imc
*/
float calculo_imc(float peso, float altura);


/*
  Aqui está a coleta de dados do usuario: peso e altura e chama a funcao exibir_classificao
  passando a funcao calculo_imc como parametro
*/
void pegar_dados();
