/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:25:06 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:52:07 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	listContacts[8];
		int	totalContacts;

	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	add( void );
		void	search( void );
		void	exit( void );
		void	printHeader ( void );
};

#endif