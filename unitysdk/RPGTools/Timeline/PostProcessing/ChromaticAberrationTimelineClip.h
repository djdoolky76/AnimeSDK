#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91DE60)

namespace RPGTools::Timeline::PostProcessing
{
	class ChromaticAberrationTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
