#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	struct alignas(4) UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO
	{
		::System::Int32 NextOffset; // 0x10
		::System::Int32 EnableCount; // 0x14
		::System::Int32 Pid; // 0x18
		::System::Int32 Flags; // 0x1C
	};
}
