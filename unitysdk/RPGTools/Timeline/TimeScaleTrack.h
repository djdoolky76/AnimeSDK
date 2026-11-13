#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_TIMESCALETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2CFF0)
#define RPGTOOLS_TIMELINE_TIMESCALETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1DA2CF30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimeScaleTrack_TypeDefinitionIndex = 49558;

	class TimeScaleTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALETRACK_CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

	};
}
