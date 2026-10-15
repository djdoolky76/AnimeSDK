#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TreasureDungeonBuffType : ::System::Int32
	{
		None = 0,
		BattleAddMazeBuff = 1,
		ShowKeyAtBegining = 2,
		ShowGridsAtBegining = 3,
	};
}
