import java.util.Scanner;

public class App {

    public static void main(String[] args) {
       //Variables
       int[] vetor = new int[10];
       Scanner teclado = new Scanner(System.in);

       //Input
      for(int i = 0; i < 10; i++){
        System.out.println("Informe o valor para o vetor: ");
        vetor[i] = teclado.nextInt();
      }
      for(int i = (vetor.length - 1); i >= 0; i--) {
         System.out.println(vetor[i]);
      }
      teclado.close();
       //Process
       
       //Output
       

    }
}