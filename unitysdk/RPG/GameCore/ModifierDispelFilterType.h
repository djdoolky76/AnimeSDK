#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierDispelFilterType : ::System::Int32
	{
		OnlyDispel = 0,
		OnlyNonDispel = 1,
		AnyStatus = 2,
	};
}
