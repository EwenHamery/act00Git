#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>#pragma once

class mission {


private:
	int nbHeures;
	std::string descriptionMission;
	int nbPerssones;

public:
	mission();
	~mission();
	mission(const mission& miss);
	mission operator = (const mission& miss);
	mission(int nbHeures, std::string descriptionMission, int nbPerssones);

	int getnbHeures();
	void setnbHeures(int heures);

	int getnbPerssones();
	void setnbPerssones(int personnes);

	std::string getdescriptionMission();
	void setdescriptionMission(std::string missiondesc);


protected:




};
#endif