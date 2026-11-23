#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define ABC_COMMON_TIMELINE_UNITY_VFXTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x21E73D0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int VFXTimelineTrack_TypeDefinitionIndex = 8968;

	class VFXTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_VFXTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
