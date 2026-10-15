#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication::ExtendedProtection
{
	enum class PolicyEnforcement : ::System::Int32
	{
		Never = 0,
		WhenSupported = 1,
		Always = 2,
	};
}
