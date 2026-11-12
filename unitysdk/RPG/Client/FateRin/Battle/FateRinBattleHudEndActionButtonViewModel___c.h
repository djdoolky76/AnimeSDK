#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8913B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD8913F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_1_OFFSET UNITYSDK_OFFSET(0xD891400)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_2_OFFSET UNITYSDK_OFFSET(0xD891430)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex = 83684;

	class FateRinBattleHudEndActionButtonViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BCD0);
		}

		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BCD8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __EndPlayerAction_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_1_OFFSET))(this);
		}

		::System::Void __EndPlayerAction_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_2_OFFSET))(this);
		}

	};
}
