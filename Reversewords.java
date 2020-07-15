//Reverse words in a string
import java.util.*;
class Main {
    public static String reverseWords(String s) {
        s = s.trim();
        s = s + " ";
        int len = s.length(), pos=0;
        String new_str = "";
        //aamar bonus 2..
        for (int i=0; i<len; i++)
        {
            char ch = s.charAt(i);
            if (ch == ' ')
            {
                String str = s.substring(pos, i);
                
                new_str = str.trim() + " " + new_str;
                
                pos = i + 1;
            }
        }
        new_str = new_str.trim();
        new_str = new_str.replaceAll("\\s+", " ");
        return new_str;
    }
    public static void main(String[] args)
    {
        String s = "a good   example   ";
        System.out.println(reverseWords(s));
    }
}
