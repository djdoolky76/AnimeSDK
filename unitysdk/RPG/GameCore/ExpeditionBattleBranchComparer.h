#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ExpeditionBattleBranchComparer : ::System::Int32
	{
		None = 0,
		Equal = 1,
		Greater = 2,
		Less = 3,
		GreaterAndEqual = 4,
		LessAndEqual = 5,
	};
}
