#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE925E90)

namespace RPGTools::Timeline::PostProcessing
{
	class MotionBlurTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
