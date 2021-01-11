# Brackets
   
A string S consisting of N characters is considered to be properly nested if any of the following conditions is true:  
  
S is empty;  
S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string;  
S has the form "VW" where V and W are properly nested strings.  
For example, the string "{[()()]}" is properly nested but "([)()]" is not.  
Write a function that, given a string S consisting of N characters, returns 1 if S is properly nested and 0 otherwise.