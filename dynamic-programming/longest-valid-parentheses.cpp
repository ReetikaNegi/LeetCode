class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        
        int open=0;
        int close=0;
        
        int result=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
            open++;}
            else {
                close++;
            }
            
            if(open==close){
                result=max(result,2*close);
                
            }else if(close>open){
                open=close=0;
            }
        }
        open=0;
        close=0;
        
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                close++;
            }
            else {
                open++;
            }
            
            if(open==close){
                result=max(result,2*open);
                
            }else if(open>close){
                open=close=0;
            }
        }
    return result;
    
    }
};