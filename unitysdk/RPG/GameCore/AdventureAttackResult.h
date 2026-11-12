#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackResult_TypeDefinitionIndex = 59156;

	enum class AdventureAttackResult : ::System::Int32
	{
		None = 0,
		TriggerBattle = 1,
		DirectKill = 2,
	};
}
