#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET UNITYSDK_OFFSET(0x1FD9BB20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WeightUtility_TypeDefinitionIndex = 32533;

	class WeightUtility : public ::System::Object
	{
	public:
		static ::System::Single NormalizeMixer(::UnityEngine::Playables::Playable mixer)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET))(mixer);
		}
	};
}
