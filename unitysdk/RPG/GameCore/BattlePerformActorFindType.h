#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattlePerformActorFindType : ::System::Int32
	{
		ByCharacterID = 0,
		ByOther = 99,
	};
}
