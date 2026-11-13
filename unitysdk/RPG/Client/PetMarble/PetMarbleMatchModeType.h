#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMatchModeType_TypeDefinitionIndex = 76853;

	enum class PetMarbleMatchModeType : ::System::Int32
	{
		Invalid = 0,
		PVE = 1,
		PVP = 2,
	};
}
