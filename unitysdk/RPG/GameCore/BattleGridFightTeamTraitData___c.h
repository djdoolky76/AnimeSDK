#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHFNFINKJKP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5B7D10)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5B7D50)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__18_0_OFFSET UNITYSDK_OFFSET(0xE5B7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData___c_TypeDefinitionIndex = 56286;

	class BattleGridFightTeamTraitData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x54B00);
		}

		static ::System::Func_2<::MHFNFINKJKP*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::MHFNFINKJKP*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x54B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_MemberCountExceptDummy_b__18_0(::MHFNFINKJKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHFNFINKJKP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA___C__GET_MEMBERCOUNTEXCEPTDUMMY_B__18_0_OFFSET))(this, a1);
		}

	};
}
