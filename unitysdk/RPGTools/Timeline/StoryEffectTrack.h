#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_STORYEFFECTTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE93D520)

namespace RPGTools::Timeline
{
	class StoryEffectTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYEFFECTTRACK_CTOR_OFFSET))(this);
		}

	};
}
