// My First Solution But Wrong on Test 1020 form 1045 !! //
class Solution {
public:
    int reverse(int x) {
        if(x < 0){
            x = x * -1;
            string s = to_string(x);
            int end = s.size() - 1 , start = 0;
            while(end >= start){
                swap(s[end] , s[start]);
                end--;
                start++;
            }
            int ret = stoll(s);
            return -ret;
        }else{
             string s = to_string(x);
             int end = s.size() - 1 , start = 0;
             while(end >= start){
                 swap(s[end] , s[start]);
                 end--;
                 start++;
             }
             int ret = stoll(s);
             return ret;
        }
    }
};
// Second Solution //
class Solution {                      
public:
    int reverse(int x) {
        long r=0;    
        while(x){
         r=r*10+x%10; 
         x=x/10;     
        }
        if(r>INT_MAX || r<INT_MIN) return 0; 
        return int(r);
    }
}; 
