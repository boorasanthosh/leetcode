class Solution(object):
    def isPalindrome(self, x):
        if x==0:
            return True
        y=x
        reversed_num=0
        while x>0:
            last_digit=x%10
            reversed_num=reversed_num*10+last_digit
            x//=10
        return reversed_num==y
        