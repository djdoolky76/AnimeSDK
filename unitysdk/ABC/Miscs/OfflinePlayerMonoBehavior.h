#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_MISCS_OFFLINEPLAYERMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Miscs
{
	inline static constexpr unsigned int OfflinePlayerMonoBehavior_TypeDefinitionIndex = 843;

	class OfflinePlayerMonoBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 SceneID; // 0x20
		::System::UInt32 AvatarEntityID; // 0x24
		::System::Boolean NoStreamingMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_MISCS_OFFLINEPLAYERMONOBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
