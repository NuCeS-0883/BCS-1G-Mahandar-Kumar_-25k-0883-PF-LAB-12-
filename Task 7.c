#include <stdio.h>
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}
int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    char left = toLower(str[start]);
    char right = toLower(str[end]);
    if (left != right)
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   int len = 0;
    while (str[len] != '\0') len++;
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    if (isPalindrome(str, 0, len - 1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

