#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/TimelineAsset_MediaType.h"

#define UNITYENGINE_TIMELINE_TRACKMEDIATYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A8010)

namespace UnityEngine::Timeline
{
	class TrackMediaType : public ::System::Attribute
	{
	public:
		::UnityEngine::Timeline::TimelineAsset_MediaType m_MediaType; // 0x10
		::System::Void _ctor(::UnityEngine::Timeline::TimelineAsset_MediaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset_MediaType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKMEDIATYPE_CTOR_OFFSET))(this, a1);
		}

	};
}
