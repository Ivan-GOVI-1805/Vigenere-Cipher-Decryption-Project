
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

//FUNCTION DECLARATION
void welcome_TEXT();
void good_input(string&);

int main()
{
    //VARIABLE DECLARATION
        //Inputs & Output
    string Plain_text;
    int len_plaintext = 0;
    string keyword;
    string Ciphertext;
        //Data
    
    //WELCOME
    welcome_TEXT();
            
    //INPUT SECTION
        //Plain_text
    cout << "Input the Plain-text that you want to encrypt" << endl
         <<"(Use only capital letters and do not space between words): " << endl;
    good_input(Plain_text);
    len_plaintext = Plain_text.size();
    cout << "You input: " << Plain_text << " of size = " << len_plaintext << endl;
    
        //Cipher_text
    cout << "Input the keyword that you want to use for your key" << endl
         <<"(Use only capital letters, do not space between words"
         <<" and cannot exceed the ): " << endl;
    good_input(keyword);
    cout << "You input: " << keyword;
    
    return 0;
}

void welcome_TEXT(){
    cout << "|-----------------------------------------------------|" << endl;
    cout << "|HELLO WELCOME TO A VIGENÈRE CIPHER DECRYPTION PROGRAM|" << endl;
    cout << "|-----------------------------------------------------|" << endl;
}

void good_input(string& text){
    bool FLAG_Good_Text = false;
    //Counters
    int i=0;
    char c;
    
    do{
        getline(cin, text);
        while(text[i]){
            c = text[i];
            if (isupper(c)) FLAG_Good_Text = true;
            else 
            {
                cout << "Enter only capital letters and do not space between words!" << endl;
                FLAG_Good_Text = false;
                break;
            }
            i++;
        }
    }while(!FLAG_Good_Text);
}


