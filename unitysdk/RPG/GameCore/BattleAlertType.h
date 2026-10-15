#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleAlertType : ::System::Int32
	{
		DefaultAlert = 0,
		TeamShare = 1,
		AimTarget = 2,
	};
}
