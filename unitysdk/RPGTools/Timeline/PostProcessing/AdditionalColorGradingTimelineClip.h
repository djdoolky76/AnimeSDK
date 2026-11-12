#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF3F5F90)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int AdditionalColorGradingTimelineClip_TypeDefinitionIndex = 49571;

	class AdditionalColorGradingTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
