#pragma once
#include "unitysdk/unitysdk.h"

#define MONO_NET_CFRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C59D60)

namespace Mono::Net
{
	struct alignas(4) CFRange
	{
		::System::IntPtr Location; // 0x10
		::System::IntPtr Length; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFRANGE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
