#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	ShrubberyCreationForm f1("test");

	Bureaucrat a("A", 30);
	a.signForm(f1);
	a.executeForm(f1);
	std::cout << "----------------" << std::endl;
	Bureaucrat b("B", 140);
	b.signForm(f1);
	b.executeForm(f1);
	std::cout << "----------------" << std::endl;
	Bureaucrat c("C", 150);
	c.signForm(f1);
	c.executeForm(f1);
}