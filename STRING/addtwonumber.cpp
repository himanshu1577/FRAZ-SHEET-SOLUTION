class Solution {
public:
string addStrings(string num1,string num2) {
  int m = stoi(num1);
  int n = stoi(num2);
  int s=m+n;
  return to_string(s);
    }
};