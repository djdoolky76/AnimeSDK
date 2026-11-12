#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF406D60)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SpeedLineTimelineClip_TypeDefinitionIndex = 49658;

	class SpeedLineTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
