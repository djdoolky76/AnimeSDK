#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB9D470)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9D4B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__GET_ISHAVEBLOCKSHIELD_B__57_0_OFFSET UNITYSDK_OFFSET(0x1DB9D4C0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudSingleViewModel___c_TypeDefinitionIndex = 83643;

	class FateRinBattleEnemyHudSingleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::AOFHFKPKKJI*>** StaticGet___9__57_0()
		{
			return (::System::Predicate_1<::AOFHFKPKKJI*>**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BB50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Battle", "<>c")->GetStaticField(0x5BB58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsHaveBlockShield_b__57_0(::AOFHFKPKKJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOFHFKPKKJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__GET_ISHAVEBLOCKSHIELD_B__57_0_OFFSET))(this, a1);
		}

	};
}
