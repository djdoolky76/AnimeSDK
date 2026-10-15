#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Pet
{
	enum class PetSummonStateType : ::System::Int32
	{
		None = 0,
		Solo = 1,
		Lineup = 2,
	};
}
