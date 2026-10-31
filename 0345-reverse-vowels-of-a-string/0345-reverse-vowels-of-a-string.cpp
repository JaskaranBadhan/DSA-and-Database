class Solution {
public:
    bool isVowel(char &ch){
        if(ch == 'a' || ch == 'e'||ch == 'i'||ch =='o'|| ch =='u'||
        ch == 'A'|| ch == 'E'||ch =='I'|| ch == 'O' || ch =='U')
            return true;
        return false;
    }
    string reverseVowels(string s){
        int n = s.length();
        int i =0;
        int j = n-1;
        while(i<j){//until y did not cross j 
            if(!isVowel(s[i])){//if i is vowel
                i++;
            }else if (!isVowel(s[j])){ //if j is vowel
                j--;
            }
            else{//means both are vowel
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};