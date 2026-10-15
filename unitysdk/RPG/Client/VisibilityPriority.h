#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class VisibilityPriority : ::System::Int32
	{
		None = 0,
		Primary = 1,
		Override = 2,
		Exclusive = 3,
	};
}
