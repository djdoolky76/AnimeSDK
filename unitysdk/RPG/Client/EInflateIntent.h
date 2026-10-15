#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EInflateIntent : ::System::Int32
	{
		None = 0,
		Charge = 1,
		Discharge = 2,
	};
}
