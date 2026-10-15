#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation::MacOsStructs
{
	struct alignas(4) sockaddr
	{
		::System::Byte sa_len; // 0x10
		::System::Byte sa_family; // 0x11
	};
}
