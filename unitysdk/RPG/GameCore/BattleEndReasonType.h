#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEndReasonType_TypeDefinitionIndex = 25216;

	enum class BattleEndReasonType : ::System::Int32
	{
		None = 0,
		AllDie = 1,
		TimeLimit = 2,
	};
}
