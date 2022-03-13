import java.util.*;
public class ProblemA {
    public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            String n=sc.next();
            StringBuffer sb=new StringBuffer(n);
            int k=n.length();
            int f=Character.getNumericValue(n.charAt(0));
            if(f==9){
                n=n.replace(n.charAt(0),'9');
                sb=sb.delete(1,n.length());
            }
            else
            {
                if(f>4){
                    int x1=9-f;
                    char s1=(char)(x1+'0');
                    n= n.replace(n.charAt(0),s1);
                }
            }
            for(int i=1;i<k;i++){
                int a=Character.getNumericValue(n.charAt(i));
                if(a<5){
                    continue;
                }
                else{
                    char s;
                    int x=9-a;
                    s=(char)(x+'0');
                    n= n.replace(n.charAt(i),s);
                }
            }
             if(f==9){
                StringBuffer sb2=new StringBuffer(n);
                sb2.deleteCharAt(0);
                StringBuffer sb1=sb.append(sb2);
                n=sb1.toString();
            }
            System.out.println(n);
    }
}
