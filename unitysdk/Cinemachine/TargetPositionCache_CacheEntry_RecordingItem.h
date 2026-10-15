#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_CacheCurve_Item.h"

namespace Cinemachine
{
	struct alignas(4) TargetPositionCache_CacheEntry_RecordingItem
	{
		::System::Single Time; // 0x10
		::System::Boolean IsCut; // 0x14
		::System::Byte _padding0[0x3];
		::Cinemachine::TargetPositionCache_CacheCurve_Item Item; // 0x18
	};
}
