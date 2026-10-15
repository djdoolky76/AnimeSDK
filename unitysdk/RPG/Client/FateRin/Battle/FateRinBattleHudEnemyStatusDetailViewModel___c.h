#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCECC2F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCECC330)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__13_0_OFFSET UNITYSDK_OFFSET(0xCECC340)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__13_1_OFFSET UNITYSDK_OFFSET(0xCECC360)

namespace RPG::Client::FateRin::Battle
{
	class FateRinBattleHudEnemyStatusDetailViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x54E70);
		}

		static ::System::Func_2<::ECNEEKNHIOE*, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::ECNEEKNHIOE*, ::System::String*>**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x54E78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x54E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::String* __RefreshLinkeInfo_b__13_0(::ECNEEKNHIOE* a1)
		{
			return ((::System::String*(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshLinkeInfo_b__13_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__13_1_OFFSET))(this, a1);
		}

	};
}
