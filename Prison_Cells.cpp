//Prison cells after N days
#include <bits/stdc++.h>
using namespace std;

class PrisonCells {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        //we see that the pattern starts repeating after 14 days
        N = (N % 14== 0) ? 14 : N%14;
        int len = cells.size();
        //we maintain a mark array to keep a track of the elements which become 1 after one iteration
        int mark[len];
        for (int i=0; i<N; i++)
        {
            //we memset the mark array to 0 at the beginning of every iteration
            memset(mark, 0, sizeof(mark));
            for (int j=0; j<len; j++)
            {
                if (j==0)
                    mark[j]=0;
                else if (j==len-1)
                    mark[j]=0;
                else if (cells[j-1]==cells[j+1])
                    mark[j]=1;
            }
            //mark the cells as 1 or 0 accordingly
            for (int k=0; k<len; k++)
                cells[k]=mark[k];
        }
        return cells;
    }
};

int main()
{
    PrisonCells obj;
    vector<int> a = {0,1,0,1,1,0,0,1};
    int N=7, i=0;
    
    vector<int> ans;
    ans = obj.prisonAfterNDays(a, N);
    int len = ans.size();
    
    cout << "[";
    for (int i=0; i<len; i++)
        cout << ans[i] << ",";
    cout << "]" << endl;
    return 0;
}