#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	struct alignas(4) ifa_ifu
	{
		::System::IntPtr ifu_broadaddr; // 0x10
		::System::IntPtr ifu_dstaddr; // 0x10
	};
}
