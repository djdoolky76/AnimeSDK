#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_LOCKACTORSTENCILTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74C330)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LockActorStencilTrack_TypeDefinitionIndex = 49222;

	class LockActorStencilTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LOCKACTORSTENCILTRACK_CTOR_OFFSET))(this);
		}

	};
}
