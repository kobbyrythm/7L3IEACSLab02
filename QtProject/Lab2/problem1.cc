#include "problem1.h"

namespace problem1 {
  std::string encrypt(std::string text, int s)
{
	std::string result = "";

	// traverse text
	for (int i=0;i<text.length();i++)
	{

		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

	// Encrypt Lowercase letters
	else
		result += char(int(text[i]+s-97)%26 +97);
	}

	return result;
}







std::string generateKey(std::string input, std::string key)
{
	int x = input.size();

	for (int i = 0; ; i++)
	{
		if (x == i)
			i = 0;
		if (key.size() == input.size())
			break;
		key.push_back(key[i]);
	}
	return key;
}


std::string cipherText(std::string input, std::string key)
{
	std::string cipher_text;

	for (int i = 0; i < input.size(); i++)
	{
		// converting in range 0-25
		int x = (input[i] + key[i]) %26;

		// convert into alphabets(ASCII)
		x += 'A';

		cipher_text.push_back(x);
	}
	return cipher_text;
}


}
