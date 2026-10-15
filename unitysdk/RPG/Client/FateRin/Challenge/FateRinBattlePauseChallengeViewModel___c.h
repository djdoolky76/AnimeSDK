#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeBuffViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF9C530)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF9C570)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_0_OFFSET UNITYSDK_OFFSET(0xCF9C580)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_1_OFFSET UNITYSDK_OFFSET(0xCF9C7B0)

namespace RPG::Client::FateRin::Challenge
{
	class FateRinBattlePauseChallengeViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Challenge", "<>c")->GetStaticField(0x570A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Challenge", "<>c")->GetStaticField(0x570A8);
		}

		static ::System::Comparison_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*>**)UnitySDK::FromName("RPG.Client.FateRin.Challenge", "<>c")->GetStaticField(0x570B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildInfo_b__1_0(::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a1, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildInfo_b__1_1(::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeBuffViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINBATTLEPAUSECHALLENGEVIEWMODEL___C___BUILDINFO_B__1_1_OFFSET))(this, a1);
		}

	};
}
