void division(int num1, int num2){
  
   float res;
   printf("Escriba su primer numero\n");
   scanf("%i", &num1);

   printf("Escriba su segundo numero\n");
   scanf("%i", &num2);

   res = (float)num1 / num2;

   printf("La division de sus dos numeros es: %.2f \n", res);
   printf("\n");
}