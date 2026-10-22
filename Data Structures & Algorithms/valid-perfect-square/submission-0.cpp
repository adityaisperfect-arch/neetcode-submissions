class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i= 1; i<=num/2;i++){
        if(i*i==num){
            return true;
        }
        }
        return num==1;
    }
};