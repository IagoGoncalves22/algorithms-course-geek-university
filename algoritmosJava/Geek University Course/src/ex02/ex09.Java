import java.util.Scanner;

public class App {

    public static void main(String[] args) {
       //Variables
       float altura, peso_ideal;
       char sexo;
       Scanner teclado = new Scanner(System.in);

       //Input       

       System.out.println("Informe sua altura: ");
       altura = teclado.nextFloat();

       System.out.println("Informe o sexo m/f: ");
       sexo = teclado.next().charAt(0);
       
       
       //Process
       if(sexo == 'm') {
        peso_ideal = (float)(72.7 * altura) - 58; // cast
        System.out.println("Seu peso  ideal é " + peso_ideal);
       }
       if(sexo == 'f'){
        peso_ideal = (float)(62.1 * altura) - (float)44.7;
        System.out.println("Seu peso  ideal é " + peso_ideal);
       }
       if(sexo != 'm' && sexo != 'f') {
        System.out.println("Sexo não reconhecido.");
        peso_ideal = 0;
       }
       teclado.close();
       //Output
       

    }
}