#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CachedType : ::System::Int32
	{
		NoCached = 0,
		Cached = 1,
		NoRecord = 2,
	};
}
