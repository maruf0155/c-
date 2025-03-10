public class box {

    int height;
    int width;

    public static void main(String[] args) {
        
        box box1 = new box();       
                
        System.out.println("The height of box1 = "+box1.height);
        System.out.println("The width of box1 = "+box1.width);
               
        box1.height = 10;
        box1.width = 20;   
        
        System.out.println("\nThe height of box1 = "+box1.height);
        System.out.println("The width of box1 = "+box1.width);
 
    }

}