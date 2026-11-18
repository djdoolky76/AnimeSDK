#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_PAUSEWAITTRACK_CANMOVEBYUSERINTIMELINE_OFFSET UNITYSDK_OFFSET(0x1FF32CF0)
#define UNITYENGINE_TIMELINE_PAUSEWAITTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1FF32D00)
#define UNITYENGINE_TIMELINE_PAUSEWAITTRACK_ONDELETECLIP_OFFSET UNITYSDK_OFFSET(0x1FF32D50)
#define UNITYENGINE_TIMELINE_PAUSEWAITTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF32D60)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PauseWaitTrack_TypeDefinitionIndex = 32427;

	class PauseWaitTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean CanMoveByUserInTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITTRACK_CANMOVEBYUSERINTIMELINE_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITTRACK_ONCREATECLIP_OFFSET))(this, clip);
		}

		::System::Void OnDeleteClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PAUSEWAITTRACK_ONDELETECLIP_OFFSET))(this, clip);
		}
	};
}
