#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("B", 149);
		Form f1("form_1", 50, 60);
		Form f2("form_2", 2, 60);

		b.signForm(f1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}