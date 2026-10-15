#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DynamicRadiusType : ::System::Int32
	{
		None = 0,
		ForceReplace = 1,
		NoZeroReplace = 2,
	};
}
