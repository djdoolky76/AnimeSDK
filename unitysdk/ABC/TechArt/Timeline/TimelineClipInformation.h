#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ABC::TechArt::Timeline
{
	inline static constexpr unsigned int TimelineClipInformation_TypeDefinitionIndex = 16321;

	struct alignas(4) TimelineClipInformation
	{
		::System::Single Start; // 0x10
		::System::Single End; // 0x14
		::System::Single Duration; // 0x18
		::System::Single EaseInDuration; // 0x1C
		::System::Single EaseOutDuration; // 0x20
		::System::Single BlendInDuration; // 0x24
		::System::Single BlendOutDuration; // 0x28
		::System::Single MixInDuration; // 0x2C
		::System::Single MixOutDuration; // 0x30
	};
}
