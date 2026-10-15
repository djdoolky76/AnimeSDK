#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarChangeFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MJAGJLCMBNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9624A0)
#define MJAGJLCMBNM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB962450)

inline static constexpr unsigned int MJAGJLCMBNM_TypeDefinitionIndex = 56237;

	class MJAGJLCMBNM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
		::System::UInt32 DLOOMDHHNGC; // 0x18
		::System::Int32 PMJIFKNEEOP; // 0x1C
		::RPG::GameCore::AvatarChangeFlag FNPGDNFLMPC; // 0x20
		::System::UInt32 INMMBDAPIIK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAGJLCMBNM_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::RPG::GameCore::AvatarChangeFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarChangeFlag))((::PBYTE)hIl2Cpp + MJAGJLCMBNM_JJNFOPNOPBF_OFFSET))(this, a1);
		}

	};
