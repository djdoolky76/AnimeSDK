#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJAPDDEENCN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD591FE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD592020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0xD592030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_1_OFFSET UNITYSDK_OFFSET(0xD592050)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c_TypeDefinitionIndex = 78362;

	class DiceCombatBattleContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x25AA0);
		}

		static ::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x25AA8);
		}

		static ::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::BJAPDDEENCN*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.DiceCombat", "<>c")->GetStaticField(0x25AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__5_0(::BJAPDDEENCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJAPDDEENCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean __DoForceRefreshDiceBattleGamePage_b__5_1(::BJAPDDEENCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJAPDDEENCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C___DOFORCEREFRESHDICEBATTLEGAMEPAGE_B__5_1_OFFSET))(this, a1);
		}

	};
}
