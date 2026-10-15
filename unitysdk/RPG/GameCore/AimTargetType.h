#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AimTargetType : ::System::UInt16
	{
		MainTarget = 1,
		SubTarget = 2,
		All = 3,
	};
}
