class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int i=0;
        int n=s.size();
        int sign=1;
        while(i<n && s[i]==' ')i++;
        if(i<n && s[i]=='+'){
            sign=1;
            i++;
        }
        else if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            ans=ans*10+digit;
            if(ans>=INT_MAX && sign==1) return INT_MAX;
            if(-ans<=INT_MIN && sign==-1) return INT_MIN;
            i++;
        }
        return sign*ans;
    }
};