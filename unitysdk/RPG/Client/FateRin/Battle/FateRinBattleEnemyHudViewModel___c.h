#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD87CF70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD87CFB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C___SORTANDSETPOSINDEX_B__14_0_OFFSET UNITYSDK_OFFSET(0xD87CFC0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c_TypeDefinitionIndex = 83647;

	class FateRinBattleEnemyHudViewModel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5AA30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5AA38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortAndSetPosIndex_b__14_0(::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a1, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C___SORTANDSETPOSINDEX_B__14_0_OFFSET))(this, a1, a2);
		}

	};
}
