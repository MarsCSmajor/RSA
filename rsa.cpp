#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm> 
#include <bits/stdc++.h>


using namespace std;

int mod_inverse(int a, int m) {
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1) {
        // q is quotient
        int q = a / m;
        int t = m;

        // m is remainder now, process same as Euclid's algorithm
        m = a % m, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive if negative
    if (x < 0)
        x += m0;

    return x;
}

//from https://www.geeksforgeeks.org/c-program-to-check-prime-number/ 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int phi(int p,int q){ // works
    return (p-1)*(q-1);
}

int getp(int n) { // works
    int t = 0;
    for(int i = 0; i < n;++i) {
    ++t;
    if(n % t == 0 && t != 1){

        return t;
    }
}
}

int getq(int n,int p) { // works
    int t2 = 0;
    for(int i = 0; i < n;++i){
        ++t2;
        if(t2 * p == n){
            return t2;
        }
    }
}

int decrypt(int ciphertext, int d, int n) {
    int decrypted = 1;
    for (int i = 0; i < d; ++i)
        decrypted = (decrypted * ciphertext) % n;
    return decrypted;
}

char map_to_character(int decrypted) {
    if (decrypted >= 7 && decrypted <= 32) {
        return decrypted + 'A' - 7; // Characters A-Z
    } else if (decrypted == 33) {
        return ' '; // Space
    } else if (decrypted == 34) {
        return '"'; // Quotation mark
    } else if (decrypted == 35) {
        return ','; // Comma
    } else if (decrypted == 36) {
        return '.'; // Period
    } else if (decrypted == 37) {
        return '\''; // Apostrophe
    } else {
        return '?'; // Unknown character
    }
}


bool checkCase(int n,int p,int q,int phiofn,int e){ // works
if(p == q || isPrime(p) == false || isPrime(q) == false || p > q || __gcd(e,phiofn) != 1) { // gcd(e,phi ) = 1 meaning there are coprime p < q if p > q is invalid
    //cout << "Public key is not valid!" << endl;
    return false;
    /*this function tests every single case in which RSA will fail and will stop the program*/
}
return true; 
}

int main() 
{
    /*A is 7 --> Z 32. 
    33 blank
    34 quotation marks
    35 a comma 
    36 .
    37 '*/
    


    vector<int> message;

    int e,n,m,d = 0;
    int p,q, phi_n = 0;
    int M;

    int inputDecodeMessage = 0;

    cin >> e >> n; // assume public key was created
    cin >> m; // length of decoded message

    p = getp(n);
    q = getq(n,p);
    phi_n = phi(p,q);


    for(int i = 0; i < m; ++i){ // puts the message in integers in vector
        cin >> inputDecodeMessage; 
        message.push_back(inputDecodeMessage);
    }
   
     if(checkCase( n, p, q,phi_n,e) == false) //; // checking is p == q, p and q being primes or program will end
    {
        cout << "Public key is not valid!";
        exit(1);
    }
    else {
    vector<char> output;

    
    d = mod_inverse(e,phi_n); // missing d function bellow

    cout << p << ' ' << q << ' ' <<  phi_n << ' ' << d << endl; 

    for(int i = 0; i < message.size();++i){
        int decrypted_message = decrypt(message.at(i),d,n);
        output.push_back(map_to_character(decrypted_message));
        cout << decrypted_message <<' ';
    }
    cout << endl;

    for(int i = 0; i < output.size();++i){
        cout << output.at(i); 
    }
//    cout << endl;
    
 
    }


    return 0;
}