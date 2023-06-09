/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:23:08 by gusousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:37:15 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"
#include  <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook( void ) : totalContacts(0), oldestContact(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::add( void ) {
	 std::string input;

	while (input.empty() && !std::cin.eof()) {
		std::cout << "You chose to add someone in the agenda\nEnter the first name: ";
		std::getline(std::cin, input);
		this->listContacts[oldestContact].setFirstName(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof()) {
		std::cout << "Enter the last name: ";
		std::getline(std::cin, input);
		this->listContacts[oldestContact].setLastName(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof()) {
		input.clear();
		std::cout << "Enter the nickame: ";
		std::getline(std::cin, input);
		this->listContacts[oldestContact].setNickname(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof()) {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, input);
		this->listContacts[oldestContact].setPhoneNumber(input);
	}
	input.clear();
	while (input.empty() && !std::cin.eof()) {
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, input);
		this->listContacts[oldestContact].setDarkestSecret(input);
	}
	if (this->totalContacts < 8)
		this->totalContacts++;
	this->oldestContact = (oldestContact + 1) % 8;
}

static void	printHeader(void) {
	std::cout << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << "|" << std::endl;
}

static void	printColumn( std::string info ) {
	if (info.length() > 10)
		info = info.substr(0, 9) + ".";
	std::cout << std::setw(10) << std::right << info << "|";
}

void	PhoneBook::printAllInformation ( int choice )
{
	std::cout << std::endl;
	std::cout << "First name:\t" << this->listContacts[choice].getFirstName() << std::endl;
	std::cout << "Last name:\t" << this->listContacts[choice].getLastName() << std::endl;
	std::cout << "Nickname:\t" << this->listContacts[choice].getNickname() << std::endl;
	std::cout << "Phone number:\t" << this->listContacts[choice].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:\t" << this->listContacts[choice].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search( void ) {
	std::string	input;
	int		choice;

	printHeader();
	for (int i = 0; i < this->totalContacts; i++)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		printColumn(this->listContacts[i].getFirstName());
		printColumn(this->listContacts[i].getLastName());
		printColumn(this->listContacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl << "type a number to choose a contact: ";
	std::getline(std::cin, input);
	choice = std::atoi(input.c_str());
	if (choice > 0 && choice <= this->totalContacts)
		printAllInformation(choice - 1);
	else
		std::cout << "Invalid index. Be cautius and try another one." << std::endl;

}

