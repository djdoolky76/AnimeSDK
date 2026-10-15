#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9521C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC952200)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_0_OFFSET UNITYSDK_OFFSET(0xC952210)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_1_OFFSET UNITYSDK_OFFSET(0xC952230)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_2_OFFSET UNITYSDK_OFFSET(0xC952250)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultWindow___c_TypeDefinitionIndex = 81541;

	class ChallengeTierceResultWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C0C0);
		}

		static ::System::Func_3<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32, ::System::ValueTuple>** StaticGet___9__19_0()
		{
			return (::System::Func_3<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32, ::System::ValueTuple>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C0C8);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::Int32>** StaticGet___9__19_2()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C0D0);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C_CTOR_OFFSET))(this);
		}

		::System::ValueTuple __CreateAnimationCoroutine_b__19_0(::RPG::Client::Challenge::ChallengeTargetViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __CreateAnimationCoroutine_b__19_1(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_1_OFFSET))(this, a1);
		}

		::System::Int32 __CreateAnimationCoroutine_b__19_2(::System::ValueTuple a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_2_OFFSET))(this, a1);
		}

	};
}
