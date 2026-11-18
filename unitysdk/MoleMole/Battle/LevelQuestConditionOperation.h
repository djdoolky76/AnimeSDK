#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestConditionOperation_TypeDefinitionIndex = 88534;

	enum class LevelQuestConditionOperation : ::System::Int32
	{
		Subtract = 2,
		Add = 1,
		Set = 0,
	};
}
