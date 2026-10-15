#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DispelOrder : ::System::Int32
	{
		Random = 0,
		LastAdded = 1,
		FirstAdded = 2,
	};
}
