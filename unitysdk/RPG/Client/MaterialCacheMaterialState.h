#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MaterialCacheMaterialState : ::System::Int32
	{
		Shared = 0,
		Instance = 1,
		SharedInstance = 2,
	};
}
