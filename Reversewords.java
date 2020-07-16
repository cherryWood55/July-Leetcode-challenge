//Problem Link : https://leetcode.com/explore/featured/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3391/

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
            if (ch == ' ')//if the selected character is a whitespace
            {
                String str = s.substring(pos, i);//extract the word before the space
                new_str = str.trim() + " " + new_str;//add it to the new string
                pos = i + 1;//increment pos to point to the beginning of the next word
            }
        }
        new_str = new_str.trim();//remove all trailing zeroes, if any
        new_str = new_str.replaceAll("\\s+", " ");//replace the multiple spaces with a single space
        return new_str;
    }
    public static void main(String[] args)
    {
        String s = "a good   example   ";
        System.out.println(reverseWords(s));
    }
}

//Time complexity : O(N) where N is the length of the string
