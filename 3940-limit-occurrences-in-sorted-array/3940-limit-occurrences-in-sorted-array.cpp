class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>ap;
        int n=nums.size();
        vector<int>ans;
    for(int i=0;i<n;i++){
        if(ap[nums[i]]>=k){
            continue;
        }else{
            ap[nums[i]]++;
            ans.push_back(nums[i]);
        }
    }
    return ans;
    }
};