#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityType_TypeDefinitionIndex = 64471;

	enum class BangbooAbilityType : ::System::Int32
	{
		Search = 2,
		Jump = 0,
		Dive = 1,
		Attack = 3,
	};
}
