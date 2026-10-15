#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC948FC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC949000)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETLEFTROUNDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xC949010)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETOBTAINEDSCORE_B__14_0_OFFSET UNITYSDK_OFFSET(0xC9491B0)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceMazeProgressHintViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6BE80);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6BE88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetLeftRoundCount_b__13_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETLEFTROUNDCOUNT_B__13_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetObtainedScore_b__14_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETOBTAINEDSCORE_B__14_0_OFFSET))(this, a1);
		}

	};
}
