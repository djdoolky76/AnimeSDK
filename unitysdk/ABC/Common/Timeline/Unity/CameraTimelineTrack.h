#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define ABC_COMMON_TIMELINE_UNITY_CAMERATIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x22C85D0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int CameraTimelineTrack_TypeDefinitionIndex = 7252;

	class CameraTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_CAMERATIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
