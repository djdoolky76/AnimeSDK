#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightTutorialTaskFinishAction : ::System::Int32
	{
		None = 0,
		AddBonus = 1,
		AddCoinTo = 2,
		TriggerSupply = 3,
	};
}
