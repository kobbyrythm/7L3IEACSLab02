#include <iostream>
#include <string>


#include "problem1.h"
#include "problem2.h"


int main()
{
    std::cout << "Question 1\n";

  //CEASAR CIPHER
 std::string text;
  int s;
	std::cout << "Enter ciphertext and press enter to continue." <<std::endl;
  std::getline(std::cin,text);
  std::cout << "Enter desired shift" <<std::endl;
	std::cin>> s;
	std::cout << "Text : " << text;
	std::cout << "\nShift: " << s;
	std::cout << "\nCipher: " << encrypt(text, s);




//VIGENERE CIPHER

  std::string input;
  std::string keyword;
	std::cout << "Enter ciphertext:";
  std::getline(std::cin,input);

  std::cout << "Enter keyword:";
  std::getline(std::cin,keyword);

	std::string key = generateKey(input, keyword);
	std::string cipher_text = cipherText(input, key);

	std::cout << "Ciphertext : "
		<< cipher_text << "\n";


//PROBLEM 2
//CEASAR DECRYPTION CIPHER
std::cout << "Question 2\n";

std::string text;
int s;
std::cout << "Enter encryptedtext and press enter to continue." <<std::endl;
std::getline(std::cin,text);
std::cout << "Enter desired shift" <<std::endl;
std::cin>> s;
std::cout << "Text : " << text;
std::cout << "\nShift: " << s;
std::cout << "\nCipher: " << encrypt(text, 26-s);



//VIGENERE DECRYPTION
std::string input;
std::string keyword;
std::cout << "Enter ciphertext:";
std::getline(std::cin,input);

std::cout << "Enter keyword:";
std::getline(std::cin,keyword);

std::string key = generateKey(input, keyword);
std::string cipher_text = cipherText(input, key);

std::cout << "Ciphertext : "
  << cipher_text << "\n";

      std::cout << "Decrypted Text : "
           << originalText(cipher_text, key);

    return 0;
}
