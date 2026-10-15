#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightHandBookItemStatus : ::System::Int32
	{
		NotSeen = 0,
		Seen = 1,
		Completed = 2,
		Invalid = 3,
	};
}
