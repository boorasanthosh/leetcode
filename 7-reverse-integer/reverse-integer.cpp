class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while(x!=0){
            int last =x%10;
            rev =rev*10+ last;
            x=x/10;
        }
        if(rev >pow(2,31)-1 ||rev < pow(-2,31))return 0;
        return (int)rev;
        }
};