#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Timeline { class AnimationTrack; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_LayerPortBinding_TypeDefinitionIndex = 32343;

	struct alignas(8) AnimationTrack_LayerPortBinding
	{
		::System::Int32 port; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Timeline::AnimationTrack* track; // 0x18
	};
}
