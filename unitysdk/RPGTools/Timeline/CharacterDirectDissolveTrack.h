#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C6E10)

namespace RPGTools::Timeline
{
	class CharacterDirectDissolveTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoReset; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVETRACK_CTOR_OFFSET))(this);
		}

	};
}
