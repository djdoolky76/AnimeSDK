#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	enum class IPProtectionLevel : ::System::Int32
	{
		Unspecified = -1,
		Unrestricted = 10,
		EdgeRestricted = 20,
		Restricted = 30,
	};
}
