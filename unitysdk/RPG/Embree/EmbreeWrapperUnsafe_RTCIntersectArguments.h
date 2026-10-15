#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Embree
{
	struct alignas(4) EmbreeWrapperUnsafe_RTCIntersectArguments
	{
		::System::UInt32 flags; // 0x10
		::System::UInt32 feature_mask; // 0x14
		::System::IntPtr context; // 0x18
		::System::IntPtr filter; // 0x20
		::System::IntPtr intersect; // 0x28
	};
}
