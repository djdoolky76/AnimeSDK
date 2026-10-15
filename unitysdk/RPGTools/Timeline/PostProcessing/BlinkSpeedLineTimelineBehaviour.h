#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BlinkSpeedLineParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE91A4F0)

namespace RPGTools::Timeline::PostProcessing
{
	class BlinkSpeedLineTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter BlinkSpeedLineParameter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
