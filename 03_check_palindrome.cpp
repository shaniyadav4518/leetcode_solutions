class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,num;
        long long y = x ;
        
        while(x>0){
            num=x%10;
            rev=(rev*10)+num;
            x=x/10;}
        if (y==rev){
        return true;}
        else {
            return false;
        }
    


            

        
        
    }
};
