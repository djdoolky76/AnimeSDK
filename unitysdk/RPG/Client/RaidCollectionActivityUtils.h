#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENAVATARREWARD_OFFSET UNITYSDK_OFFSET(0x19081140)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0x19080FA0)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDAVATARREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x19081230)
#define RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDTIMELIMITEDREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x19081090)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionActivityUtils_TypeDefinitionIndex = 68702;

	class RaidCollectionActivityUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSeenTimeLimitedReward(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENTIMELIMITEDREWARD_OFFSET))(a1);
		}

		static ::System::Boolean RecordTimeLimitedRewardSeen(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDTIMELIMITEDREWARDSEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsSeenAvatarReward(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_ISSEENAVATARREWARD_OFFSET))(a1);
		}

		static ::System::Boolean RecordAvatarRewardSeen(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONACTIVITYUTILS_RECORDAVATARREWARDSEEN_OFFSET))(a1);
		}

	};
}
