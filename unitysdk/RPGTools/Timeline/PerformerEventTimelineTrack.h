#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C754850)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerEventTimelineTrack_TypeDefinitionIndex = 49495;

	class PerformerEventTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK_CTOR_OFFSET))(this);
		}

	};
}
