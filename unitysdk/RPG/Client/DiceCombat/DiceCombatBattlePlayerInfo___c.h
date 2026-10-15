#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJAPDDEENCN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC15AD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC15B10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET UNITYSDK_OFFSET(0xCC15B20)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex = 76044;

	class DiceCombatBattlePlayerInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x1E6C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x1E6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasRolledDiceResult_b__25_0(::BJAPDDEENCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJAPDDEENCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET))(this, a1);
		}

	};
}
