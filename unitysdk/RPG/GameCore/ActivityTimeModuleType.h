#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActivityTimeModuleType : ::System::Int32
	{
		Normal = 0,
		Reuse = 1,
		Forever = 2,
	};
}
