#pragma once
#include "../../Models/Admin/Admin.h"
#include "../../Models/User/User.h"

class AdminController
{


public:

	/**
	 * @brief make login for admin that stored in database
	 * @param string nationalID of the admin and string password of the admin
	 * @return bool shows if the login process for admin done successfully or not (true -> login be successfully, false -> login be failed )
	 */
	bool login(string nationalID, string password);


	/**
	 * @brief Give Admin Privilege to a normal user
	 * @param string nationalID  of the user , string password to make him an admin
    */
	void giveAdminPrivilage(string nationalID , string password);


	/**
     * @brief View all the users that stored in the database
     * @return vector<User> contains the all stored users in the database
    */
	vector<User> viewUsers();


	/**
     * @brief Retrive specific user from the database according to his nationalID
     * @param string nationalID of the user
     * @return User which has the same nationalID
    */
	User viewUser(string nationalID);


	/**
     * @brief Delete all the users from the database
    */
	void deleteUsers();


	/**
	 * @brief Delete specific user from the database according to his nationalID
	 * @param string nationalID of the user
	*/
	void deleteUser(string nationalID);


    /**
	* @brief gets the statistic about doses
	* @return map<string, float> -> the dose and its precentage 
	*/
	map<int, int> statOfAllDoses();


	/**
	* @brief gets the statistic about genders
	* @return map<string, float> -> the male and the precentage of its dose
	*/
	map<string, int> statOfAllGenders();


	/**
	* @brief to get the statistic about governments 
	* @return map<string, float> -> the govenment and the precentage of dose taken in
	*/
	map<string, int> statOfAllGovernment();


	/**
	* @brief Gets the number of all registered users in database
	* @return int the count of user registered in the system
	*/
	int getAllUsersCount();

private:
	/**
	* @brief Gets the number of users that have taken specific number of doses
	* @param int numOfDoses user has taken
	* @return int the number of registered users that have taken this number of doses
	*/
	int statOfDoses(int numOfDoses);


	/**
	* @brief gets the number of users of the spacific government
	* @param string government to get its registered users
	* @return int the number of registered users from this government
	*/
	int statOfGovernment(string government);
};

