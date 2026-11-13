#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C75E870)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ChromaticAberrationTimelineClip_TypeDefinitionIndex = 49596;

	class ChromaticAberrationTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
