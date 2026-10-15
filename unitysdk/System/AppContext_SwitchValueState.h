#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class AppContext_SwitchValueState : ::System::Int32
	{
		HasFalseValue = 1,
		HasTrueValue = 2,
		HasLookedForOverride = 4,
		UnknownValue = 8,
	};
}
