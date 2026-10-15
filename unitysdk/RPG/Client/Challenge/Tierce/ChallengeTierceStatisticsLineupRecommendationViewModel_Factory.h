#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC96ABB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC96AC90)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStatisticsLineupRecommendationViewModel_Factory_TypeDefinitionIndex = 81604;

	class ChallengeTierceStatisticsLineupRecommendationViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel* Create(::CKCJOCJGHKC* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel*(*)(::PVOID, ::CKCJOCJGHKC*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}

	};
}
