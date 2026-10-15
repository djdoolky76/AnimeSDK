#pragma once
#include "unitysdk/unitysdk.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDTIMELINECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE9278C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PolaroidTimelineClip_TypeDefinitionIndex = 48595;

	class PolaroidTimelineClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POLAROIDTIMELINECLIP_CTOR_OFFSET))(this);
		}

	};
}
