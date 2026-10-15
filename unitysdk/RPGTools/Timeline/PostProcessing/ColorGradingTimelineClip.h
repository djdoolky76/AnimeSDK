#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91F200)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineClip_TypeDefinitionIndex = 48559;

	class ColorGradingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
