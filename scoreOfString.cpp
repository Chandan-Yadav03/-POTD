class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int i=0,j=1;
        while(s[i]!='\0'&& s[j]!='\0')
        {
            if((s[i]-s[j])<0)
            {
                sum+=(s[j]-s[i]);
            }
            else
            {
                sum+=(s[i]-s[j]);
            }
            i++;
            j++;
        }
        return sum;
    }
};