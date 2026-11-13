#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C744FE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventTrack_TypeDefinitionIndex = 49186;

	class LifeCycleEventTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTTRACK_CTOR_OFFSET))(this);
		}

	};
}
