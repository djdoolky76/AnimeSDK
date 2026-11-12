#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Timeline { class AnimationTrack; }

#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET UNITYSDK_OFFSET(0x20632450)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x206323F0)
#define UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET UNITYSDK_OFFSET(0x20632210)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationTrack_AnimationTrackUpgrade_TypeDefinitionIndex = 39710;

	class AnimationTrack_AnimationTrackUpgrade : public ::System::Object
	{
	public:
		static ::System::Void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET))(a1);
		}

		static ::System::Void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET))(a1);
		}

		static ::System::Void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONTRACK_ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET))(a1);
		}

	};
}
