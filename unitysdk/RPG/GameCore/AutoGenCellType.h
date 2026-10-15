#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AutoGenCellType : ::System::Int32
	{
		Base = 1,
		PCOnly = 2,
		MobileHighOnly = 4,
		All = 7,
	};
}
