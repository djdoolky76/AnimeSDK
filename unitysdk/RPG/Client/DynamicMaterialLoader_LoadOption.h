#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DynamicMaterialLoader_LoadOption : ::System::Int32
	{
		LoadOnAwake = 1,
		LoadOnEnable = 2,
		UnloadOnDisable = 4,
		UnloadOnDespawn = 8,
	};
}
