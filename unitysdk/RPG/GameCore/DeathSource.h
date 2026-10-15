#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DeathSource : ::System::Int32
	{
		Unknown = 0,
		KilledByOthers = 1,
		KilledBySelf = 2,
		Escape = 3,
	};
}
