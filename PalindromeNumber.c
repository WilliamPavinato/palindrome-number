#include <stdio.h>
#include <stdbool.h>


bool isPalindrome(int x) {

      if ( x < 0 ){
        return false;

      } else {
        long long reversed = 0;
        long temporary = x;
        int digit;

        while ( temporary != 0 ){
            digit = temporary % 10;
            reversed = reversed * 10 + digit;
            temporary /= 10;
        }

        if ( reversed == x ){
            return true;
        } else {
            return false;
        }

      }
        
    }

int main (){
    
    int num = 455546;

    if( isPalindrome(num) == true ){
        printf("The number is a palindrome");
    } else {
        printf("The number is not a palindrome");
    }
}