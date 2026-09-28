class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string s: operations)
        {
            if(s=="C"){
                st.pop();
            }
            else if(s=="D"){
                st.push(2*st.top());
            }
            else if(s=="+"){
            int last=st.top();
            st.pop();
            int seclast=st.top();
            st.push(last);
            int sum= last+seclast;
            st.push(sum);
            }
            else {st.push(stoi(s));}

        }
    int ans =0;
    while(!st.empty()){
        ans+= st.top();
        st.pop();
    }
    return ans;
}
};