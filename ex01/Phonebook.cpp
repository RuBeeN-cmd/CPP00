#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_nb_contact = 0;
	this->_oldest_contact = 0;
	std::cout << "Welcome to UnperpetualPhonebook !" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Goodbye !" << std::endl;
}

int	PhoneBook::warning_erase(void)
{
	std::string	cmd;
	Contact&	oldest_contact = this->_contacts[this->_oldest_contact];

	while (1)
	{
		std::cout << "Warning : add a new contact will erase ";
		std::cout << oldest_contact.get_first_name() << " ";
		std::cout << oldest_contact.get_last_name() << ". Continue ? [y/n] " << std::flush;
		std::cin >> cmd;
		if (cmd == "n" || cmd == "N")
			return (0);
		else if (cmd == "y" || cmd == "Y")
			return (1);
	}
	return (0);
}

int	PhoneBook::continue_routine(void)
{
	std::string	cmd;

	std::cout << "ADD SEARCH EXIT" << std::endl;
	std::cin >> cmd;
	if (cmd == "ADD")
		this->add_contact();
	else if (cmd == "SEARCH")
		this->search();
	else if (cmd == "EXIT")
		return (0);
	return (1);
}

void	PhoneBook::add_contact(void)
{
	Contact	contact;
	
	if (this->_nb_contact == 8)
	{
		if (!this->warning_erase())
			return ;
		contact.set_info();
		this->_contacts[this->_oldest_contact] = contact;
		this->_oldest_contact++;
		if (this->_oldest_contact == 8)
			this->_oldest_contact = 0;
	}
	else
	{
		contact.set_info();
		this->_contacts[this->_nb_contact] = contact;
		this->_nb_contact++;
	}
}

void	PhoneBook::show_contact_list(void)
{
	for (int i = 0; i < this->_nb_contact; i++)
	{
		Contact& contact = this->_contacts[i];
		std::cout << std::setw(10) << i << "|" << std::flush;
		std::cout << std::setw(10) << contact.get_short_first_name() << "|" << std::flush;
		std::cout << std::setw(10) << contact.get_short_last_name() << "|" << std::flush;
		std::cout << std::setw(10) << contact.get_short_nickname() << std::endl;
	}
}

void	PhoneBook::warning_no_contact(void)
{
	std::cout << "No contact saved !" << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	choice;
	if (!this->_nb_contact)
	{
		this->warning_no_contact();
		return ;
	}
	do
	{
		this->show_contact_list();
		std::cin >> choice;
	} while (choice.length() != 1 || choice[0] < '0' || choice[0] >= '0' + this->_nb_contact);
	this->_contacts[choice[0] - '0'].show_info();
}