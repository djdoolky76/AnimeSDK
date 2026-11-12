#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_ElectricChain; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD6EB020)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD6EAE90)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD6EAD40)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD6EADB0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD6EAEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainBehavior_TypeDefinitionIndex = 72428;

	class Effect_ElectricChainBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ElectricChain* get__Owner()
		{
			return ((::RPG::Client::Effect_ElectricChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
