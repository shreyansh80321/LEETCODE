class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=1e9;
        int l=nums.size();
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(i==j)continue;
                int tot=0;

                // cout<<i<<" "<<j<<endl;
                for(int p=0;p<l;p++){
                    int tar=p%2==0?i:j;
                    int rem=nums[p]%k;
                    int s1=(tar-rem+k)%k;
                    int s2=(rem-tar+k)%k;
                    // cout<<s1<<" "<<s2<<endl;
                    tot+=min(s1,s2);
                    // ans=min()
                }
                ans=min(ans,tot);
            }
        }
        return ans;
    }
};