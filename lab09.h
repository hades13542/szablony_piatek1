#include <iostream>

template <typename T> 
class SymbolContainer{
public:
	SymbolContainer(T);
	void Print() const;
	template <typename Y,int>	
	static void Print(SymbolContainer<Y>&);
	T getValue(){return _value;}
private:
	T _value;
};

template <typename T>
void SymbolContainer<T>::Print() const{
	std::cout<<"This is a container with value: "<<_value<<"\n";
} 

template <typename T>
SymbolContainer<T>::SymbolContainer(T input){
	_value=input;
}

template <typename T>
template <typename Y, int n>
void SymbolContainer<T>::Print(SymbolContainer<Y>& a){
	for (int i=0; i<n; ++i){
	std::cout<<"Container value is: "<<a.getValue()<<"\n";
}
}
