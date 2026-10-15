#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterMovementTiming : ::System::Int32
	{
		Ignore = 0,
		LateUpdate = 1,
		AnimatorMove = 2,
	};
}
