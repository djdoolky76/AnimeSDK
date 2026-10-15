#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RuntimeGroupManager_GroupLoadStatus : ::System::Int32
	{
		Unknown = 0,
		Load = 1,
		Unload = 2,
	};
}
