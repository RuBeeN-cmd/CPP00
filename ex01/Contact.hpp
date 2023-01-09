#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
		
	public:
		Contact();
		~Contact();

		void	set_first_name(void);
		void	set_last_name(void);
		void	set_nickname(void);
		void	set_phone_number(void);
		void	set_secret(void);

		void	set_info(void);


		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);

		std::string	get_short_first_name(void);
		std::string	get_short_last_name(void);
		std::string	get_short_nickname(void);

		void	show_info(void);

};

#endif