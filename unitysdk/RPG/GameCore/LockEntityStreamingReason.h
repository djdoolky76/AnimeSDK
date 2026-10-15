#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LockEntityStreamingReason : ::System::Int32
	{
		Default = 0,
		StartPuzzle = 1,
		SpecialWayPath = 2,
	};
}
