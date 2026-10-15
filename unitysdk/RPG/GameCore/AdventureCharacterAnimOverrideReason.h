#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureCharacterAnimOverrideReason : ::System::Int32
	{
		None = 0,
		Stun = 1,
		Confine = 2,
	};
}
