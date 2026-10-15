#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/TransitionParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE92BD40)

namespace RPGTools::Timeline::PostProcessing
{
	class TransitionTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::TransitionParameter TransitionParameter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
