#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE9286C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RadialBlurTimelineClip_TypeDefinitionIndex = 48601;

	class RadialBlurTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
