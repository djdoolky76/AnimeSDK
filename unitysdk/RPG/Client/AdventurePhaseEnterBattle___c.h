#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC620DD0)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC620E00)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__68_1_OFFSET UNITYSDK_OFFSET(0xC620E10)
#define RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__68_3_OFFSET UNITYSDK_OFFSET(0xC620F10)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseEnterBattle___c_TypeDefinitionIndex = 60139;

	class AdventurePhaseEnterBattle___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__68_3()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4B960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4B968);
		}

		static ::System::Action** StaticGet___9__68_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4B970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnLoadingBattleScene_b__68_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__68_1_OFFSET))(this, a1);
		}

		::System::Void __OnLoadingBattleScene_b__68_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEENTERBATTLE___C___ONLOADINGBATTLESCENE_B__68_3_OFFSET))(this, a1);
		}

	};
}
