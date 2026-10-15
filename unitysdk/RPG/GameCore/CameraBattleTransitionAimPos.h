#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CameraBattleTransitionAimPos : ::System::Int32
	{
		Default = 0,
		Attacker = 1,
		Defender = 2,
		AttackerDefenderCenter = 3,
	};
}
