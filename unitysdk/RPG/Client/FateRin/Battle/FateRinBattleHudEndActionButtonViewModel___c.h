#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCE62C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE6300)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_1_OFFSET UNITYSDK_OFFSET(0x1DCE6310)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C___ENDPLAYERACTION_B__6_2_OFFSET UNITYSDK_OFFSET(0x1DCE6340)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEndActionButtonViewModel___c_TypeDefinitionIndex = 83683;

	class FateRinBattleHudEndActionButtonViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BB70);
		}

		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BB78);
		}

		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BB80);
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
