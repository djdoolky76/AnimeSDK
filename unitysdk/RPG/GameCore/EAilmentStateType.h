#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAilmentStateType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		Hit = 2,
		Stun = 3,
		Dead = 4,
		StunHit = 5,
		Confine = 6,
	};
}
