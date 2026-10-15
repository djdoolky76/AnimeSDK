#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ForbidSelectReason : ::System::Int32
	{
		Default = 1,
		Confine = 2,
	};
}
