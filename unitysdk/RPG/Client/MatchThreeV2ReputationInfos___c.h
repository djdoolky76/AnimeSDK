#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2ReputationData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5CC980)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CC9C0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__GETCHALLENGINGREPUTATIONDATALIST_B__6_0_OFFSET UNITYSDK_OFFSET(0xD5CC9D0)

namespace RPG::Client
{
	class MatchThreeV2ReputationInfos___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MatchThreeV2ReputationData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2ReputationData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55B00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChallengingReputationDataList_b__6_0(::RPG::Client::MatchThreeV2ReputationData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS___C__GETCHALLENGINGREPUTATIONDATALIST_B__6_0_OFFSET))(this, a1);
		}

	};
}
