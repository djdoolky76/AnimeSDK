#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class FadingPriority : ::System::Int32
	{
		Critical = 0,
		High = 1,
		Normal = 2,
		Low = 3,
	};
}
