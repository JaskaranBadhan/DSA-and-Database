class Solution {
public:
    string reverseWords(string s) {
        //Story
        //1.reverse whole string 
        reverse(s.begin(),s.end());
        int i =0;
        //hero hone hamre l and r jo reverse karnege words ko 
        int l =0,r=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i] != ' '){//i ko agar char dikha to r ko dega and i++ and r++
            s[r++] = s[i++];
            }
            if(l < r){// l            r
                reverse(s.begin()+l,s.begin()+r);
                s[r] = ' ';//space assign after word get after reverse 
                r++;
                l=r;// will make l near r 
            }
            i++;// i will increment 
        }
        s = s.substr(0,r-1);
        return s;
    }

};