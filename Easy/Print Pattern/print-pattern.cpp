//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    void loop_pattern2(int n, vector<int> &ans, int end)
    {
        ans.push_back(n);
        if(n == end)  return;
        loop_pattern2(n+5,ans,end);
    }
    int loop_pattern1(int n, vector<int> &ans)
    {
        ans.push_back(n);
        if(n <= 0)  return n+5;
        loop_pattern1(n-5,ans);
    }
public:
    vector<int> pattern(int N){
        vector<int> ans;
        if(N<=0)  return {N};
        int value = loop_pattern1(N,ans);
        loop_pattern2(value,ans,N);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends