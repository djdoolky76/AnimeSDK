#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatAnchorType : ::System::Int32
	{
		None = 0,
		TargetSide = 1,
		TargetHeadIcon = 2,
		Manual = 3,
	};
}
