#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble
{
	enum class PetMarbleMatchState : ::System::Int32
	{
		None = 0,
		Matching = 1,
		Preparation = 2,
		WaitingStart = 3,
	};
}
