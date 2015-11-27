#include"lab09.h"

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Pliku lab09.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab09. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_09

int main ()
{
  SymbolContainer<int> intContainer = 35.6;
  intContainer.Print();

  SymbolContainer<float> floatContainer = 35.6;
  floatContainer.Print();
  
  SymbolContainer<char> charContainer = 35.6;
  charContainer.Print();

  SymbolContainer<int>::Print<int, 2> (intContainer);
  SymbolContainer<int>::Print<char, 3> (charContainer);
  SymbolContainer<int>::Print<float, 4> (floatContainer);
}
/*
This is a container with value: 35
This is a container with value: 35.6
This is a container with value: #
Container value is: 35
Container value is: 35
Container value is: #
Container value is: #
Container value is: #
Container value is: 35.6
Container value is: 35.6
Container value is: 35.6
Container value is: 35.6
*/
