//Problem link : https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3381/

#include <iostream>
using namespace std;
class Hamming {
public:
    int hammingDistance(int x, int y) {
        //calculate the XOR of the two numbers
        //XOR of two bits is 1 only when the two bits are different
        int z = x ^ y;

        //now calculate the number of 1s in the binary representation of the XOR
        
        //find the binary equivalent, count the number of 1s as you calculate the binary equivalent
        int ans = 0;
        while (z > 0)
        {
            int d = z % 2;
            ans = ans + (d & 1);
            z /= 2;
        }
        return ans;
    }
};
int main()
{
	//create an object of the class Hamming
	Hamming obj1;
    int a, b;
    cin >> a >> b;
    //access the member function through the object
    int c = obj1.hammingDistance(a, b);
    cout << c << endl;
    return 0;
}

//Time complexity : O(n), where n = maximum number of bits in either a or b


