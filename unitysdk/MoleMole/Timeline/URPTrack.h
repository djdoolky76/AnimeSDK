#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define MOLEMOLE_TIMELINE_URPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B8D60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int URPTrack_TypeDefinitionIndex = 90249;

	class URPTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPTRACK__CTOR_OFFSET))(this);
		}
	};
}
