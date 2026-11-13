#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_TIMELINETRACKIDLELIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2E210)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineTrackIdleLive_TypeDefinitionIndex = 48828;

	class TimelineTrackIdleLive : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINETRACKIDLELIVE_CTOR_OFFSET))(this);
		}

	};
}
