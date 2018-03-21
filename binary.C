#include<stdio.h>
#include<conio.h>
#include <bits/stdc++.h>
{
    
    int i = 0, binary_a[SIZE] = { 0 };
    while (a > 0)
    {
        binary_a[i] = a % 2;
        a /= 2;
        i++;
    }
 
   
    int j = 0, binary_b[SIZE] = { 0 };
    while (b > 0)
    {
        binary_b[j] = b % 2;
        b /= 2;
        j++;
    }
 
   
    for (int i = 0; i < SIZE; i++)
        if (binary_a[i] != binary_b[i]) 
        return false;
 
    }
 
int main()
{
    ull a = 8, b = 4;
    cout << bit_anagram_check(a, b) << endl;
    return 0;
}
