#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security
{
	enum class PolicyLevelType : ::System::Int32
	{
		User = 0,
		Machine = 1,
		Enterprise = 2,
		AppDomain = 3,
	};
}
