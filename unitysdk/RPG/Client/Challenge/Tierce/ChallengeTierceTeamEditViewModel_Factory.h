#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNNMGIJMFK;
class ENJKEDGCLJF;
class KNOOGHJPPBL;
class NHCHDKJLNBJ;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC970540)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC970500)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel_Factory_TypeDefinitionIndex = 81631;

	class ChallengeTierceTeamEditViewModel_Factory : public ::System::Object
	{
	public:
		::NHCHDKJLNBJ* _Repository; // 0x10
		::KNOOGHJPPBL* _ObtainedAvatarService; // 0x18
		::ENJKEDGCLJF* _PlayerReturnTrialAvatarService; // 0x20
		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory* _StatisticsRecommendationFactory; // 0x28
		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory* _FriendRecommendationFactory; // 0x30
		::ACNNMGIJMFK* _TeamConflictCheckService; // 0x38
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory* _TeamFactory; // 0x40
		::System::Void _ctor(::NHCHDKJLNBJ* a1, ::KNOOGHJPPBL* a2, ::ACNNMGIJMFK* a3, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory* a4, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory* a5, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory* a6, ::ENJKEDGCLJF* a7)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*, ::KNOOGHJPPBL*, ::ACNNMGIJMFK*, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory*, ::ENJKEDGCLJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* Create(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel*(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
