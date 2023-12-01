class Solution{
public:
  int romanToInt(String s){
    unordered_map<char, int>rn;

    rn['I'] = 1; 
    rn['V'] = 5;
    rn['X'] = 10;
    rn['L'] = 50;
    rn['C'] = 100;
    rn['D'] = 500;
    rn['M'] = 1000;

    int sum = 0;
    
    for (int i = 0; i < s.length(); i++){

      if (rn[s[i]] < rn[s[i+1]]){

        sum = sum -rn[s[i]];
      }
      else{
        sum = sum + rn[s[i]];
      }
    }
  return sum;
  }
};
