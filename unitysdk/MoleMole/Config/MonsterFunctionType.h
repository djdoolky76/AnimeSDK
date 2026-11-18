#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterFunctionType_TypeDefinitionIndex = 86043;

	enum class MonsterFunctionType : ::System::Int32
	{
		NPC = 3,
		Other = 0,
		Trap = 5,
		Monster = 1,
		Destruction = 2,
		Summoned = 4,
	};
}
