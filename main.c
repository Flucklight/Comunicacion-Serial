#include <16f887.h>
#fuses INTRC_IO, NOWDT, PROTECT, NOLVP, MCLR, NOBROWNOUT
#use delay(INTERNAL = 4000000)
#use RS232(baud = 9600, xmit = PIN_C6, rcv = PIN_C7, timeout = 100) //Inicializacion del puerto serie en el uC Baudaje: 9600, Transmisor (Tx): RC6, Receptor (Rx): RC7

void main()
{
   char abc;

   while (true)
   {
      printf("Julio Cesar\n\r");       //Manda a imprimir el nombre "Julio Cesar"  
      printf("Jimenez Bolio\n\r");     //Manda a imprimir el apellido "Jimenez Bolio"
      printf("\n\r");
      printf("Victor Manuel\n\r");     //Manda a imprimir el nombre "Victor Manuel"
      printf("Sanchez Sanchez\n\r");   //Manda a imprimir el apellido "Sanchez Sanchez"
      printf("\n\r");

      for (abc = 65; abc <= 90; abc++)
      {
         printf("Letra: %c\n\r", abc);
      }
   }
}
