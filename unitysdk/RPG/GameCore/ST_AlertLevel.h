#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ST_AlertLevel : ::System::Int32
	{
		None = 0,
		Alert = 1,
		Chase = 2,
	};
}
