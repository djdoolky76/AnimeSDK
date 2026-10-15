#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainCollection.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD81F40)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD81F80)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C___INITIALIZESUBCHAINS_B__13_0_OFFSET UNITYSDK_OFFSET(0xCD81F90)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior___c_TypeDefinitionIndex = 73586;

	class Effect_ElectricChainV2Behavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.ElectricChainV2", "<>c")->GetStaticField(0x40360);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ElectricChainV2", "<>c")->GetStaticField(0x40368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitializeSubChains_b__13_0(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR___C___INITIALIZESUBCHAINS_B__13_0_OFFSET))(this, a1);
		}

	};
}
