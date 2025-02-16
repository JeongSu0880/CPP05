#pragma once

#include <iostream>

class ShrubberyCreationForm {
	private:
		const std::string mName;
		bool mSignedStatus;
		const int mSignedGrade;
		const int mExecutedGrade;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &name, const int &signedGrade, const int &executedGrade);
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);

		const std::string &getName() const;
		const bool &getSignedStatus() const;
		const int &getSignedGrade() const;
		const int &getExecutedGrade() const;

		void beSigned(const Bureaucrat &b);
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};