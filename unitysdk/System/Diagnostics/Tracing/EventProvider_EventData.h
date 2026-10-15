#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	struct alignas(4) EventProvider_EventData
	{
		::System::UInt64 Ptr; // 0x10
		::System::UInt32 Size; // 0x18
		::System::UInt32 Reserved; // 0x1C
	};
}
