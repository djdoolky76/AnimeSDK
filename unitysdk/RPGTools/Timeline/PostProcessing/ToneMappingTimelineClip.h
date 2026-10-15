#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE92BA30)

namespace RPGTools::Timeline::PostProcessing
{
	class ToneMappingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
