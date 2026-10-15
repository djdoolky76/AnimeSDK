#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOROTATABLEREGIONPOSEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD861F10)

namespace RPG::Client
{
	class MonoRotatableRegionPoseInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 PoseID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROTATABLEREGIONPOSEINFO_CTOR_OFFSET))(this);
		}

	};
}
