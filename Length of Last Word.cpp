int Solution::lengthOfLastWord(const string A) {
    int length = 0;
    int n = A.length();
    int i = n-1;
    if(n == 1)
     return 1;
  
   if(A[i] == ' ')
   {
       while(A[i] == ' ')
        i--;
   }
    if(A[i] != ' ')
   {
    while(A[i] != ' ' && i >= 0)
    {
        length++;
        i--;
    }
   }
    return length;
}
