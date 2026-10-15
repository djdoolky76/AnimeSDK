#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KELFJFLNAFI;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0xD5B77A0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B7820)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET UNITYSDK_OFFSET(0xD5B7D80)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET UNITYSDK_OFFSET(0xD5B7CD0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET UNITYSDK_OFFSET(0xD5B7E90)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET UNITYSDK_OFFSET(0xD5B7830)

namespace RPG::Client
{
	class MatchThreeV2ChallengerInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>* _DataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LevelIDToChallenger; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ChallengerInfos* Create(::KELFJFLNAFI* a1, ::RPG::Client::MatchThreeV2LevelInfos* a2)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerInfos*(*)(::KELFJFLNAFI*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init(::KELFJFLNAFI* a1, ::RPG::Client::MatchThreeV2LevelInfos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KELFJFLNAFI*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerDataByGameLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengingLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET))(this, a1);
		}

	};
}
