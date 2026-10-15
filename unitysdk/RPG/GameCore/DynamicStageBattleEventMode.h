#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DynamicStageBattleEventMode : ::System::Int32
	{
		Normal = 0,
		ReplaceNext = 1,
		ReplaceAllVisible = 2,
	};
}
