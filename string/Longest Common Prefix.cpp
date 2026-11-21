class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string first = strs[0];
        for(int i=0;i<first.length();i++){
            char ch = first[i];
            for(int j=i;j<strs.size();j++){
                if(i>=strs[j].length()) return ans;
                if(strs[j][i] != ch) return ans;
            }
            ans += ch;
        }
        return ans;
    }
}