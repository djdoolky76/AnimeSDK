#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraBattleAnimationType : ::System::Int32
	{
		None = 0,
		Idle = 1,
		Jump = 2,
		MagicAttack = 3,
		Hurt = 4,
		Dash = 5,
		Run = 6,
		Howl = 7,
		Lay = 8,
	};
}
