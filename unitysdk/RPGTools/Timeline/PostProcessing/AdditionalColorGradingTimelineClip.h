#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91A080)

namespace RPGTools::Timeline::PostProcessing
{
	class AdditionalColorGradingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
