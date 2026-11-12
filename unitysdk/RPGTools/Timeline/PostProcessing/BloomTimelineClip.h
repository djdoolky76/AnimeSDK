#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF3F9A50)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomTimelineClip_TypeDefinitionIndex = 49592;

	class BloomTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
