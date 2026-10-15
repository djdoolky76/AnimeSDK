#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	struct alignas(4) AlignmentUnion
	{
		::System::UInt64 Alignment; // 0x10
		::System::Int32 Length; // 0x10
		::System::Int32 IfIndex; // 0x14
	};
}
