#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF3F94D0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomAnimateTimelineClip_TypeDefinitionIndex = 49589;

	class BloomAnimateTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
