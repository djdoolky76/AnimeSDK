#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	struct alignas(4) UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR
	{
		::System::Int64 Ptr; // 0x10
		::System::Int32 Size; // 0x18
		::System::Int32 Type; // 0x1C
	};
}
