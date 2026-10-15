#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightTraitBonusAddType : ::System::Int32
	{
		ByGameplay = 0,
		ByEquipNum = 1,
		ByConstWithPerfectPass = 2,
	};
}
