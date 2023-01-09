#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	int		_nb_contact;
	int		_oldest_contact;
	Contact	_contacts[8];

	int		warning_erase(void);
	void	warning_no_contact(void);
	void	add_contact(void);
	void	show_contact_list(void);
	void	search(void);

public:
	PhoneBook();
	~PhoneBook();

	int		continue_routine(void);
};

#endif