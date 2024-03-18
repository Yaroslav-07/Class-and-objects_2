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
	Counter for_start() {
		std::string choice;
		std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
		std::cin >> choice;
		if (choice == "yes") {
			int n;
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> n;
			Counter c1{ n };
			return c1;
	    }
	    else {
			Counter c1;
			return c1;
	    }
	}



int main(){
	setlocale(LC_ALL, "Russian");
	Counter c1 = for_start();

	while (true)
	{
		char choice = '-';

		
		while (choice == '+' || choice == '-' || choice == '='){
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> choice;
			switch (choice){
			case '+': {
				c1.next();
				break;
			}
			case '-': {
				c1.previous();
				break;
			}
			case '=': {
				std::cout << c1.shouw() << std::endl;
				break;
			}
			}
		}
			std::cout << "До свидания!";

	}
	

	
}
