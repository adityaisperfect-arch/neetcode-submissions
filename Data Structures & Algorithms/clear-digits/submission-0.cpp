class Solution {
public:
    string clearDigits(string s) {
string ans="";
for(int c:s){
    if(!ans.empty() && c>47 && c<58){
        ans.pop_back();
    }
    else ans.push_back(c);
}
return ans;
    }
};
