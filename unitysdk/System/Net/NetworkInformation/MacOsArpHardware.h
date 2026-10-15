#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	enum class MacOsArpHardware : ::System::Int32
	{
		ETHER = 6,
		ATM = 37,
		SLIP = 28,
		PPP = 23,
		LOOPBACK = 24,
		FDDI = 15,
	};
}
