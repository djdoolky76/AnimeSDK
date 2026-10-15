#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKCHBKHKLO;
namespace RPG::Client::FateRin::Battle { class PrepareBattleTalkEntryViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEDF3C0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDF400)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CREATEBYHOUGUMAPFIGHT_B__2_0_OFFSET UNITYSDK_OFFSET(0xCEDF410)

namespace RPG::Client::FateRin::Battle
{
	class PrepareBattleTalkViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MFKCHBKHKLO*, ::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::MFKCHBKHKLO*, ::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x55180);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x55188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel* _CreateByHouguMapFight_b__2_0(::MFKCHBKHKLO* a1)
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*(*)(::PVOID, ::MFKCHBKHKLO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL___C__CREATEBYHOUGUMAPFIGHT_B__2_0_OFFSET))(this, a1);
		}

	};
}
