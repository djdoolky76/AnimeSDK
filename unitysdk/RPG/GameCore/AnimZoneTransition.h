#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AnimZoneTransition : ::System::Int32
	{
		Both = 0,
		Current = 1,
		Next = 2,
	};
}
