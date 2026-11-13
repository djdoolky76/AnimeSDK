#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_HIDELEVELSTAGETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9185F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideLevelStageTrack_TypeDefinitionIndex = 49479;

	class HideLevelStageTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGETRACK_CTOR_OFFSET))(this);
		}

	};
}
