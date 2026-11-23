#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Timeline { class AnimationTrack; }

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_AC5F9E077A954F48_OFFSET UNITYSDK_OFFSET(0x40D1C50)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_B71F03179E8D45D5_OFFSET UNITYSDK_OFFSET(0x40D1B50)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_BA9F9E89D0EE0F33_OFFSET UNITYSDK_OFFSET(0x40D1BA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_E02E658AF2AEE3A0_TypeDefinitionIndex = 20208;

	class AnimationTrack_E02E658AF2AEE3A0 : public ::System::Object
	{
	public:
		static ::System::Void AC5F9E077A954F48(::UnityEngine::Timeline::AnimationTrack* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_AC5F9E077A954F48_OFFSET))(B630861FBF48C2ED);
		}

		static ::System::Void BA9F9E89D0EE0F33(::UnityEngine::Timeline::AnimationTrack* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_BA9F9E89D0EE0F33_OFFSET))(B630861FBF48C2ED);
		}

		static ::System::Void B71F03179E8D45D5(::UnityEngine::Timeline::AnimationTrack* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_E02E658AF2AEE3A0_B71F03179E8D45D5_OFFSET))(B630861FBF48C2ED);
		}
	};
}
