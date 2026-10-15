#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ViewCacheType : ::System::Int32
	{
		LRUCached = 0,
		AlwaysCached = 1,
		DontCache = 2,
	};
}
