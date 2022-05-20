#include <string>;
#include <iostream>
using namespace std;
bool HasLetters(string text)
{
	bool hasLetters = false;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] != ' ')
		{
			hasLetters = true;
			return hasLetters;
		}
	}
	return hasLetters;
}
int main()
{
	string texto = "";
	int palavras = 1;
	bool temLetra = false;
	cout << "AVISO: O TEXTO NÃO PODE POSSUIR 2 BARRAS DE ESPAÇO UMA DO LADO DA OUTRA.\n";
	cout << "Manda o texto:\n";
	getline(cin, texto);
	for (int i = 0; i < texto.length(); i++)
	{
		if (texto[i] == ' ' && texto[i + 1] == ' ')
		{
			break;
		}
		else if (texto[i] == ' ' && texto[i+1] != ' ')
		{
			palavras++;
		}
	}
	temLetra = HasLetters(texto);
	if (texto.empty() || temLetra == false)
	{
		cout << "\ntanto de palavras: " << 0;
	}
	else
	{
		cout << "\ntanto de palavras: " << palavras;
	}
}
