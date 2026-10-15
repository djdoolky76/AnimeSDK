#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE9210E0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ToneMappingTimelineClip_TypeDefinitionIndex = 48622;

	class ToneMappingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
