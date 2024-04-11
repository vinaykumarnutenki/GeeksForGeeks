//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool> p (N+1, true); 
        
        p[0] = false;
        p[1] = false; 
        
        for(int i = 2; i <= N; i++){
            if(p[i]){
                for(int j = i*i; j<=N; j+=i){
                    p[j] = false; 
                }
            }
        }
        
        vector<int> res; 
        
        for(int i = 2; i <= N; i++){
            if(p[i]){
                res.push_back(i); 
            }
        }
        
        return res; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends