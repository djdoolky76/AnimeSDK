#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA0090)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA00D0)
#define RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__GETSELECTINGBUFFCOUNT_B__4_0_OFFSET UNITYSDK_OFFSET(0xCFA00E0)

namespace RPG::Client::FateRin::Challenge
{
	class FateRinChallengeLevelInfoViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Challenge", "<>c")->GetStaticField(0x57180);
		}

		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Challenge", "<>c")->GetStaticField(0x57188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSelectingBuffCount_b__4_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CHALLENGE_FATERINCHALLENGELEVELINFOVIEWMODEL___C__GETSELECTINGBUFFCOUNT_B__4_0_OFFSET))(this, a1);
		}

	};
}
