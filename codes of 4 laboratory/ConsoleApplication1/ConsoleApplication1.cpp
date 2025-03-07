#include <iostream>
#include <string>
#include <algorithm> //подключаем для transform

int main () {
	//Программа, в которой составляется предложение с прописными буквами на английском языке с использованием двух переменных, после чего происходит замена прописных букв на строчные

	system("chcp 1251");
	std::string first_name;
	std::string second_name;

	std::cout << "Введите первую часть предложения прописными буквами на английском языке: ";
	getline(std::cin,first_name);

	std::cout << "Введите вторую часть предложения прописными буквами на английском языке: ";
	getline(std::cin, second_name);

	//Составленное предложение c прописными буквами на английском языке
	std::string sentence = first_name + ' ' + second_name; 
	std::cout << "Полученное предложение: " << sentence << std::endl;

	//Преобразование предложения из прописных букв в строчные буквы
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	
	std::cout << "Предложение со строковыми буквами: " << sentence;
	return 0;
}
