#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeak; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD311240)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD311280)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKALLNORMALHASPERFECTPASSED_B__54_0_OFFSET UNITYSDK_OFFSET(0xD3112D0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSEDINBESTRECORD_B__53_0_OFFSET UNITYSDK_OFFSET(0xD3112B0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSED_B__52_0_OFFSET UNITYSDK_OFFSET(0xD311290)
#define RPG_CLIENT_CHALLENGEPEAKGROUP___C__GETLEVELPROGRESSINFO_B__59_0_OFFSET UNITYSDK_OFFSET(0xD311310)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGroup___c_TypeDefinitionIndex = 64617;

	class ChallengePeakGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66AC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66AC8);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66AD0);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66AD8);
		}

		static ::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengePeak*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAnyPeakIsPassed_b__52_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSED_B__52_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHasAnyPeakIsPassedInBestRecord_b__53_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKHASANYPEAKISPASSEDINBESTRECORD_B__53_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAllNormalHasPerfectPassed_b__54_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__CHECKALLNORMALHASPERFECTPASSED_B__54_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetLevelProgressInfo_b__59_0(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP___C__GETLEVELPROGRESSINFO_B__59_0_OFFSET))(this, a1);
		}

	};
}
