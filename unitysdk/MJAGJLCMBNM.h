#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarChangeFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MJAGJLCMBNM_CTOR_OFFSET UNITYSDK_OFFSET(0xC218320)
#define MJAGJLCMBNM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC2182D0)

inline static constexpr unsigned int MJAGJLCMBNM_TypeDefinitionIndex = 57449;

	class MJAGJLCMBNM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
		::System::UInt32 INMMBDAPIIK; // 0x18
		::RPG::GameCore::AvatarChangeFlag FNPGDNFLMPC; // 0x1C
		::System::UInt32 DLOOMDHHNGC; // 0x20
		::System::Int32 PMJIFKNEEOP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAGJLCMBNM_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::RPG::GameCore::AvatarChangeFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarChangeFlag))((::PBYTE)hIl2Cpp + MJAGJLCMBNM_JJNFOPNOPBF_OFFSET))(this, a1);
		}

	};
