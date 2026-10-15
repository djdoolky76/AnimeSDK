#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFEE490)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFEE4D0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET UNITYSDK_OFFSET(0xCFEE4E0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET UNITYSDK_OFFSET(0xCFEE550)

namespace RPG::Client
{
	class FightFestChallengeLevelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE38);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5AE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasRewardCanTake_b__27_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsFinishAllQuest_b__29_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET))(this, a1);
		}

	};
}
