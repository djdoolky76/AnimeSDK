#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation::MacOsStructs
{
	struct alignas(4) sockaddr_in
	{
		::System::Byte sin_len; // 0x10
		::System::Byte sin_family; // 0x11
		::System::UInt16 sin_port; // 0x12
		::System::UInt32 sin_addr; // 0x14
	};
}
