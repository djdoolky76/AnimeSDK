#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x40D87F0)
#define UNITYENGINE_TIMELINE_PLAYABLETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x40D88B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PlayableTrack_TypeDefinitionIndex = 20213;

	class PlayableTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* AD43DEAB8304398A)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET))(this, AD43DEAB8304398A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK__CTOR_OFFSET))(this);
		}
	};
}
