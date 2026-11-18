#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FightModeType_TypeDefinitionIndex = 86571;

	enum class FightModeType : ::System::Int32
	{
		Evade = 0,
		Attack = 2,
		Move = 1,
	};
}
