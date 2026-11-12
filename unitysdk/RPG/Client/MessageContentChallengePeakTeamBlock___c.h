#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeak; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE12D0C0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE12D100)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xE12D110)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock___c_TypeDefinitionIndex = 64703;

	class MessageContentChallengePeakTeamBlock___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
}
