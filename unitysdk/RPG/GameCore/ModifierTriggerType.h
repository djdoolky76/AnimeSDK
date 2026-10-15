#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierTriggerType : ::System::Int32
	{
		None = 0,
		EnterChessRogueCell = 1,
		EnterChessRogueRow = 2,
	};
}
