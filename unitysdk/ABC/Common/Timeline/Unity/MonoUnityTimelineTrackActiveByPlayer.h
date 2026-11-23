#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define ABC_COMMON_TIMELINE_UNITY_MONOUNITYTIMELINETRACKACTIVEBYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD810)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int MonoUnityTimelineTrackActiveByPlayer_TypeDefinitionIndex = 7348;

	class MonoUnityTimelineTrackActiveByPlayer
	{
	public:
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* HeightMidActiveTracks; // 0x28
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* HeightHighActiveTracks; // 0x30
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* HeightShortActiveTracks; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_MONOUNITYTIMELINETRACKACTIVEBYPLAYER__CTOR_OFFSET))(this);
		}
	};
}
