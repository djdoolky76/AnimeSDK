#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 87963;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		REWARDS = 16,
		PROGRESS = 2,
		NONE = 0,
		LEVEL_TIPS = 32,
		TITLE = 1,
		ALL = 2147483647,
		LEVEL_QUEST = 8,
		TIME_LIMIT_CHALLENGE_TARGET = 64,
		CHALLENGE_TARGET = 4,
		SUB_BUFFS = 128,
	};
}
