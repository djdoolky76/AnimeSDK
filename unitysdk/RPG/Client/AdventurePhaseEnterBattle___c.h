#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF7BF00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7BF30)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__69_1_OFFSET UNITYSDK_OFFSET(0xCF7BF40)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__69_3_OFFSET UNITYSDK_OFFSET(0xCF7C040)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle___c_TypeDefinitionIndex = 61423;

	class AdventurePhaseEnterBattle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Single>** StaticGet___9__69_1()
		{
			return (::System::Action_1<::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x415A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x415A8);
		}

		static ::System::Action_1<::System::Single>** StaticGet___9__69_3()
		{
			return (::System::Action_1<::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x415B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__69_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__69_1_OFFSET))(this, a1);
		}

		::System::Void __OnLoadingBattleScene_b__69_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__69_3_OFFSET))(this, a1);
		}

	};
}
