#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE9391B0)
#define RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE939140)

namespace RPGTools::Timeline
{
	class ShowDialogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWDIALOGTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

	};
}
