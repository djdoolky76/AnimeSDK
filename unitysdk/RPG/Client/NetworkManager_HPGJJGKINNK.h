#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_NETWORKMANAGER_HPGJJGKINNK_CTOR_OFFSET UNITYSDK_OFFSET(0xECF70)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager_HPGJJGKINNK_TypeDefinitionIndex = 69369;

	struct alignas(4) NetworkManager_HPGJJGKINNK
	{
		::System::UInt32 DLAIECHBNPP; // 0x10
		::System::UInt16 NFPODPOMKEN; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER_HPGJJGKINNK_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
