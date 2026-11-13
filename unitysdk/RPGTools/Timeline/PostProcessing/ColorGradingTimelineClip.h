#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C75FCE0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineClip_TypeDefinitionIndex = 49600;

	class ColorGradingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
