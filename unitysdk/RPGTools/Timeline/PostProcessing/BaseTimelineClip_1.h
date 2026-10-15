#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip.h"

namespace RPGTools::Timeline::PostProcessing
{
	template <typename T>
	class BaseTimelineClip_1 : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip
	{
	public:
		T Template; // 0x0
	};
}
