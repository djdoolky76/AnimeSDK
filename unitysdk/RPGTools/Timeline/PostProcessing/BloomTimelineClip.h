#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91DB40)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BloomTimelineClip_TypeDefinitionIndex = 48551;

	class BloomTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
