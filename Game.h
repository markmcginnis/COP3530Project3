#pragma once
#include <vector>
#include "Play.h"

struct Game {
	string gameID;
	TeamName offenseTeam;
	TeamName defenseTeam;
	string gameDate;
	vector<Play> plays;
};