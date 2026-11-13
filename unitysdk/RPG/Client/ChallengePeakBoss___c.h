#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakTarget; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKBOSS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B721AC0)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B721B00)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__68_0_OFFSET UNITYSDK_OFFSET(0x1B721B40)
#define RPG_CLIENT_CHALLENGEPEAKBOSS___C__GET_VORACITYINVASIONLEVEL_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B721B10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBoss___c_TypeDefinitionIndex = 64597;

	class ChallengePeakBoss___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710F0);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>** StaticGet___9__68_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeakTarget*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x710F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_VoracityInvasionLevel_b__33_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__GET_VORACITYINVASIONLEVEL_B__33_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCountOfPassedTargetsInEasyMode_b__68_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSS___C__GETCOUNTOFPASSEDTARGETSINEASYMODE_B__68_0_OFFSET))(this, a1);
		}

	};
}
