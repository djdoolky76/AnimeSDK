#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::PS
{
	enum class TrcRestrictionStatus : ::System::Int32
	{
		Error = -1,
		Allow = 0,
		Forbid = 1,
	};
}
