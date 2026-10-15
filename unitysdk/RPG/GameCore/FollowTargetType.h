#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FollowTargetType : ::System::Int32
	{
		LocalPlayer = 0,
		SummonUnitOwner = 1,
		Custom = 2,
	};
}
