
    
       
        
   int Solution::isPalindrome(string A) {
    int n = A.length();
    int s = 0; int e = n-1;
    bool ans=true;
    while(s<e)
    {
        while(s<e && !(isalnum(A[e])))
        {
            e--;
        }
       while(s<e && !(isalnum(A[s])))
        {
            s++;
        }
        if(tolower(A[s]) != tolower(A[e]))
        {
            ans = false;
            break;
        }
        s++;
        e--;
       
        
    }
    if(ans)
     return 1;
    else
     return 0;
}


