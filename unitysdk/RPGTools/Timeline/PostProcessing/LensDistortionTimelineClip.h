#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91A640)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LensDistortionTimelineClip_TypeDefinitionIndex = 48578;

	class LensDistortionTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LENSDISTORTIONTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
