#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueBuffAeonType : ::System::Int32
	{
		Normal = 0,
		BattleEventBuff = 1,
		BattleEventBuffEnhance = 2,
		BattleEventBuffCross = 3,
	};
}
