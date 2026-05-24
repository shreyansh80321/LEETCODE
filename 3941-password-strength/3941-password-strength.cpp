class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st;
        int ans=0;
        for(char &i:password){
            // cout<<(int)i<<" ";
            if(((int)i>=65&&(int)i<=91)&&(!st.count(i))){
                st.insert(i);
                ans+=2;
            }else if(((int)i>=97&&(int)i<=123)&&(!st.count(i))){
                st.insert(i);
                ans+=1;
            }else if((i=='!'||i=='@'||i=='#'||i=='$')&&(!st.count(i))){
                st.insert(i);
                ans+=5;
            }else if((i-'0'>=0&&i-'0'<=9)&&(!st.count(i))){
                st.insert(i);
                // cout<<(int)i<<" ";
                ans+=3;
            }
        }
        // cout<<endl;
        // for(auto &i:st)cout<<i<<" ";

        return ans;
    }
};