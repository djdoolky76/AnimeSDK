#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHCHDKJLNBJ;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRewardViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC94C180)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC94C170)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRewardViewModel_Factory_TypeDefinitionIndex = 81615;

	class ChallengeTierceRewardViewModel_Factory : public ::System::Object
	{
	public:
		::NHCHDKJLNBJ* _Repository; // 0x10
		::System::Void _ctor(::NHCHDKJLNBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* Create(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
