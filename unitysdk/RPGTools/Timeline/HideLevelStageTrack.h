#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_HIDELEVELSTAGETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE900450)

namespace RPGTools::Timeline
{
	class HideLevelStageTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGETRACK_CTOR_OFFSET))(this);
		}

	};
}
