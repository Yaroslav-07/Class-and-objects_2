#include <iostream>

	class Counter
	{
	public:
		Counter(int count = 1) {
			this->count = count;
		};
		void next() {
			this->count = this->count++;
		}
		void previous (){
			this->count = this->count--;
		}
		int shouw() {
			return this->count;
		}

	private:
		int count;
	};

int main(){
	setlocale(LC_ALL, "Russian");
    std::cout << "Начало работы счетчика: \n";
	Counter c1;
	std::cout<<c1.shouw()<< std::endl;
	c1.next();
	std::cout << c1.shouw() << std::endl;
	c1.previous();
	std::cout << c1.shouw() << std::endl;
	Counter c2{ 5 };
	std::cout << c2.shouw() << std::endl;
}
