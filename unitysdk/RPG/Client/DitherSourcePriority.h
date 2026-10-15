#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DitherSourcePriority : ::System::Int32
	{
		Default = 0,
		Camera = 1,
		Logic = 2,
		Max = 3,
	};
}
