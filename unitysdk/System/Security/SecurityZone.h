#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security
{
	enum class SecurityZone : ::System::Int32
	{
		MyComputer = 0,
		Intranet = 1,
		Trusted = 2,
		Internet = 3,
		Untrusted = 4,
		NoZone = -1,
	};
}
