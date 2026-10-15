#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE9250A0)

namespace RPGTools::Timeline::PostProcessing
{
	class LensDistortionTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
