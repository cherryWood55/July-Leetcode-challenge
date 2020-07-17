//Problem link : https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/

//Arranging coins

#include <iostream>
using namespace std;

class Solution{
    public:
        int arrangeCoins (int n){
            int cnt = 0, i=1;
            while (n >= i){
                n -= i;
                i++;
                cnt++;
            }
            return cnt;
        }
};

int main()
{
    Solution obj;
    cout << obj.arrangeCoins(5) << endl;
    return 0;
}