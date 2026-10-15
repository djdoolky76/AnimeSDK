#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_ElectricChainV2AnimationBinding; }
namespace RPG::Client::ElectricChainV2 { class GaussianConstraint; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD28C20)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD287C0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD280D0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD28140)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD28840)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ElectricChainV2AnimationBindingBehavior_TypeDefinitionIndex = 70466;

	class Effect_ElectricChainV2AnimationBindingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::ElectricChainV2::GaussianConstraint* _GaussianConstraint; // 0x38
		::RPG::Client::ElectricChainV2::GaussianConstraint* _SubChainGaussianConstraint; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_ElectricChainV2AnimationBinding* get__Owner()
		{
			return ((::RPG::Client::Effect_ElectricChainV2AnimationBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINV2ANIMATIONBINDINGBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
