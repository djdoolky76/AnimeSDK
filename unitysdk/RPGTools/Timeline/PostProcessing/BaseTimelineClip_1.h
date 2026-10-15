#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip.h"

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BaseTimelineClip_1_TypeDefinitionIndex = 48535;

	template <typename T>
	class BaseTimelineClip_1 : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip
	{
	public:
		T Template; // 0x0
	};
}
