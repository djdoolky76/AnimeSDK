#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D32A0)
#define RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE8D71F0)

namespace RPGTools::Timeline
{
	class CustomUniqueNameTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMUNIQUENAMETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

	};
}
