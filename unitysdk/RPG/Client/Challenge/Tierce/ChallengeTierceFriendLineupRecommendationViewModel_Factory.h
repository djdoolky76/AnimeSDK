#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC9487B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC948910)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceFriendLineupRecommendationViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel* Create(::CKCJOCJGHKC* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel*(*)(::PVOID, ::CKCJOCJGHKC*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}

	};
}
