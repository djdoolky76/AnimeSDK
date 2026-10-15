#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimAvatarMoveAbility : ::System::UInt32
	{
		None = 0,
		Ladder = 1,
		Slide = 2,
		DropOneSidePass = 4,
	};
}
