#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	enum class AuthenticationLevel : ::System::Int32
	{
		None = 0,
		MutualAuthRequested = 1,
		MutualAuthRequired = 2,
	};
}
