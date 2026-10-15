#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterEmoState : ::System::Int32
	{
		Default = 0,
		Visual = 1,
		Hit = 2,
		Stun = 3,
	};
}
