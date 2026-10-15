#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	struct alignas(4) sockaddr_in
	{
		::System::UInt16 sin_family; // 0x10
		::System::UInt16 sin_port; // 0x12
		::System::UInt32 sin_addr; // 0x14
	};
}
