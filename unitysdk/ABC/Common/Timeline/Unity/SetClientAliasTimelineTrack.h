#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define ABC_COMMON_TIMELINE_UNITY_SETCLIENTALIASTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x224BCD0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int SetClientAliasTimelineTrack_TypeDefinitionIndex = 6913;

	class SetClientAliasTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_SETCLIENTALIASTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
