#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE939060)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE938FF0)

namespace RPGTools::Timeline
{
	class ShowCumulativeScoreBoardTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

	};
}
