#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C76BFF0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ToneMappingTimelineClip_TypeDefinitionIndex = 49663;

	class ToneMappingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
