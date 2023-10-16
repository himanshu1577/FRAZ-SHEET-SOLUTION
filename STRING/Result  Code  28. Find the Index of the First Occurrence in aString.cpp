class Solution {
public:
int strStr(string haystack, string needle) {
    int n = haystack.size();
    string p;
    for(int i=0;i<n;i++){
      p = haystack.substr(i,needle.size());
      if(p == needle)
      return i;
    }
    return -1;
  }
};
