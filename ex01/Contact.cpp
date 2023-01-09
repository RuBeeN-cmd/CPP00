#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::set_first_name(void) {
	do
	{
		std::cout << "First Name : " << std::flush;
		std::cin >> this->_first_name;
	} while (this->_first_name.empty());
	
}

void	Contact::set_last_name(void) {
	do
	{
		std::cout << "Last Name : " << std::flush;
		std::cin >> this->_last_name;
	} while (this->_last_name.empty());
}

void	Contact::set_nickname(void) {
	do
	{
		std::cout << "Nickname : " << std::flush;
		std::cin >> this->_nickname;
	} while (this->_nickname.empty());
}

void	Contact::set_phone_number(void) {
	do
	{
		std::cout << "Phone Number : " << std::flush;
		std::cin >> this->_phone_number;
	} while (this->_phone_number.empty());
}

void	Contact::set_secret(void) {
	do
	{
		std::cout << "Darkest Sercret : " << std::flush;
		std::cin >> this->_secret;
	} while (this->_secret.empty());
}

void	Contact::set_info(void) {
	this->set_first_name();
	this->set_last_name();
	this->set_nickname();
	this->set_phone_number();
	this->set_secret();
}

std::string	Contact::get_first_name(void) {
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) {
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) {
	return (this->_nickname);
}

std::string	Contact::get_short_first_name(void) {
	std::string	str = this->get_first_name();
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9).append("."));
}

std::string	Contact::get_short_last_name(void) {
	std::string	str = this->get_last_name();
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9).append("."));
}

std::string	Contact::get_short_nickname(void) {
	std::string	str = this->get_nickname();
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9).append("."));
}

void	Contact::show_info(void) {
	std::cout << "First Name : " << std::flush;
	std::cout << this->_first_name << std::endl;

	std::cout << "Last Name : " << std::flush;
	std::cout << this->_last_name << std::endl;

	std::cout << "Nickname : " << std::flush;
	std::cout << this->_nickname << std::endl;

	std::cout << "Phone Number : " << std::flush;
	std::cout << this->_phone_number << std::endl;

	std::cout << "Darkest Sercret : " << std::flush;
	std::cout << this->_secret << std::endl;
}