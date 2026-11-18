#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/GroupTrack.h"

#define MOLEMOLE_TIMELINE_ZNET_ZNETCACHEGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F62960)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetCacheGroupTrack_TypeDefinitionIndex = 84993;

	class ZNetCacheGroupTrack : public ::UnityEngine::Timeline::GroupTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETCACHEGROUPTRACK__CTOR_OFFSET))(this);
		}
	};
}
