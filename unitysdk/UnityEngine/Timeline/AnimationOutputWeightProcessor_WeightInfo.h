#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace UnityEngine::Timeline
{
	struct alignas(4) AnimationOutputWeightProcessor_WeightInfo
	{
		::UnityEngine::Playables::Playable mixer; // 0x10
		::UnityEngine::Playables::Playable parentMixer; // 0x20
		::System::Int32 port; // 0x30
	};
}
