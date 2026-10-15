#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AssetEventPort : ::System::Int32
	{
		Done = 0,
		Before = 1,
		After = 2,
		Count = 3,
	};
}
