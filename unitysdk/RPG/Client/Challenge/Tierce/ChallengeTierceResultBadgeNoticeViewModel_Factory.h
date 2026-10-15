#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBKNCCIENIP;
class MNALCKHBLKN;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC94E0F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC94E0E0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultBadgeNoticeViewModel_Factory_TypeDefinitionIndex = 81606;

	class ChallengeTierceResultBadgeNoticeViewModel_Factory : public ::System::Object
	{
	public:
		::JBKNCCIENIP* _WindowService; // 0x10
		::MNALCKHBLKN* _BadgeDeliveryService; // 0x18
		::System::Void _ctor(::MNALCKHBLKN* a1, ::JBKNCCIENIP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNALCKHBLKN*, ::JBKNCCIENIP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* Create(::RPG::Client::ChallengeData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel*(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTBADGENOTICEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
