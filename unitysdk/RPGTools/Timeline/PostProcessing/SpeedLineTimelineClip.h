#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE92B100)

namespace RPGTools::Timeline::PostProcessing
{
	class SpeedLineTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SPEEDLINETIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
