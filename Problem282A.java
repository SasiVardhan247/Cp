import java.util.*;
public class Problem282A {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int x=0;
        while(n>=1){
                String st = sc.next();
                if (st.charAt(0)== '+') {
                    ++x;
                }
                else if(st.charAt(1)=='+'){
                    x++;
                }
                else if(st.charAt(1)=='-'){
                    x--;
                }
                else if(st.charAt(0)=='-')
                {
                    --x;
                }
                n--;
        }
        System.out.println(x);
    }
}
