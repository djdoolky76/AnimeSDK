#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91D5C0)

namespace RPGTools::Timeline::PostProcessing
{
	class BloomAnimateTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLOOMANIMATETIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
