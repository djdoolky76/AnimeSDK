#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AssetState : ::System::Int32
	{
		NotLoad = 0,
		Loading = 1,
		Loaded = 2,
		Succeed = 3,
		Failed = 4,
	};
}
