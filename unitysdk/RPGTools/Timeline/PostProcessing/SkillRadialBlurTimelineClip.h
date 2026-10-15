#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE92A280)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SkillRadialBlurTimelineClip_TypeDefinitionIndex = 48613;

	class SkillRadialBlurTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
