#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestOperation_TypeDefinitionIndex = 56319;

	enum class LevelQuestOperation : ::System::Int32
	{
		Fail = 1,
		Succeed = 0,
		Cancel = 2,
	};
}
