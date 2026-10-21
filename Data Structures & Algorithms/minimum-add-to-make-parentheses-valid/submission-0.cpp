class Solution {
public:
    int minAddToMakeValid(string s) {
string ans="";
for(int c:s){
    if(!ans.empty() && ans.back()=='(' && c==')'){
        ans.pop_back();
    }
    else ans.push_back(c);
}
return ans.size();
    }
};
