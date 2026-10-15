#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/MacOsStructs/in6_addr.h"

namespace System::Net::NetworkInformation::MacOsStructs
{
	struct alignas(4) sockaddr_in6
	{
		::System::Byte sin6_len; // 0x10
		::System::Byte sin6_family; // 0x11
		::System::UInt16 sin6_port; // 0x12
		::System::UInt32 sin6_flowinfo; // 0x14
		::System::Net::NetworkInformation::MacOsStructs::in6_addr sin6_addr; // 0x18
		::System::UInt32 sin6_scope_id; // 0x20
	};
}
