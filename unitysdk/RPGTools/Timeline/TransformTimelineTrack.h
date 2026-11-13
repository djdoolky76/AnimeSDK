#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2E8E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransformTimelineTrack_TypeDefinitionIndex = 49565;

	class TransformTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINETRACK_CTOR_OFFSET))(this);
		}

	};
}
