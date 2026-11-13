#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHFNFINKJKP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE66A30)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE66A70)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__19_0_OFFSET UNITYSDK_OFFSET(0x1AE66A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData___c_TypeDefinitionIndex = 57500;

	class BattleGridFightTeamTraitData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x68170);
		}

		static ::System::Func_2<::MHFNFINKJKP*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::MHFNFINKJKP*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x68178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_MemberCountExceptDummy_b__19_0(::MHFNFINKJKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHFNFINKJKP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__19_0_OFFSET))(this, a1);
		}

	};
}
