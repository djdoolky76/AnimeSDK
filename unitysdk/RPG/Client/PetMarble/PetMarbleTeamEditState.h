#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble
{
	enum class PetMarbleTeamEditState : ::System::Int32
	{
		None = 0,
		TeamEditing = 1,
		Countdown = 2,
		EnterBattle = 3,
	};
}
