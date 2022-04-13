#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    int n = s.length();
    string str;
    int len;
    for(int i=0; i<n; i++){
            str="";
            len = 0;
            str+=s[i];
        for(int j=i; j<n; j++){
            for(int k=i; k<j; k++){
                if(s[j] != s[k]){
                     continue;
                }
                else
                    break;
            }


        }
         if(str.length() > len)
                len = str.length();
            else
                continue;
    }
    return len;
}

int main(){
string s = "abcabcbb";
cout<< lengthOfLongestSubstring(s);
return 0;

}
