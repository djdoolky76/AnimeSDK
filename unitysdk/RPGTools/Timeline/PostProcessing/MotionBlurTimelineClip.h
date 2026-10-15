#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE91B510)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int MotionBlurTimelineClip_TypeDefinitionIndex = 48586;

	class MotionBlurTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_MOTIONBLURTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
