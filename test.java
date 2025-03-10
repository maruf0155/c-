public class test {
    private int a=1;
    static int c=2;
    public void matho()
    {
        //test a=new test();
        System.out.println(a);
        System.out.println(c);
    }
    public static void main(String[] args) {
        test m=new test();
        //System.out.println(a);
        m.matho();
        //sum();
    }
    public  static void sum()
    {
        test a=new test();
        System.out.println(a.a);
    }
}
