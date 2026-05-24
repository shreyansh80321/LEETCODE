class Solution {
public:
    int n;
    
    int solve(vector<int>&arr,int i,int d,vector<int>&dp){
        if(dp[i]!=-1)return dp[i];
        int result=1;
        //Left
        for(int j=i-1;j>=max(0,i-d);j--){
            if(arr[j]>=arr[i])break;
            result=max(result,1+solve(arr,j,d,dp));
        }
        //Right
        for(int j=i+1;j<=min(n-1,i+d);j++){
            if(arr[j]>=arr[i])break;
            result=max(result,1+solve(arr,j,d,dp));
        }
        return dp[i]=result;

    }
    int maxJumps(vector<int>& arr, int d) {
        n=arr.size();
        int res=1;
        vector<int>dp(n+1,-1);
        for(int i=0;i<n;i++){
            res=max(res,solve(arr,i,d,dp));
        }
        return res;
    }
};