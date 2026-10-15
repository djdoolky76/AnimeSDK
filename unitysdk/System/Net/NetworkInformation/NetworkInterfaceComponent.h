#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	enum class NetworkInterfaceComponent : ::System::Int32
	{
		IPv4 = 0,
		IPv6 = 1,
	};
}
