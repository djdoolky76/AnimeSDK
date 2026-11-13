#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C764870)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int GaussianBlurTimelineClip_TypeDefinitionIndex = 49615;

	class GaussianBlurTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
