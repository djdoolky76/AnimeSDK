#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport.h"
#include "unitysdk/RPG/Client/Effect_ElectricChainAnimationSupport_TargetChainMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class Effect_ElectricChain; }

#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_BHKEMIBKNLH_OFFSET UNITYSDK_OFFSET(0xCD27BB0)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD27D30)
#define RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD279E0)

namespace RPG::Client
{
	class Effect_ElectricChainAnimationSupport : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Effect_ElectricChain* target; // 0x18
		::RPG::Client::Effect_ElectricChainAnimationSupport_TargetChainMode targetChainMode; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* targetChains; // 0x28
		::RPG::Client::Effect_ElectricChainAnimationSupport_ElectricChainAnimationSupport electricChainAnimationSupport; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_ONENABLE_OFFSET))(this);
		}

		::System::Void BHKEMIBKNLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ELECTRICCHAINANIMATIONSUPPORT_BHKEMIBKNLH_OFFSET))(this);
		}

	};
}
