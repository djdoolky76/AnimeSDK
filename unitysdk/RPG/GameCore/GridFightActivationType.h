#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightActivationType : ::System::Int32
	{
		GreaterEqualThan = 1,
		GreaterThan = 2,
		Equal = 3,
	};
}
