#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHILEFFPFL.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET UNITYSDK_OFFSET(0x1DBCD3B0)
#define RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x1DBCD400)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeHelper_TypeDefinitionIndex = 64087;

	class UpgradeHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckLineupNeedsShowUpgrade(::DMHILEFFPFL a1)
		{
			return ((::System::Boolean(*)(::DMHILEFFPFL))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_CHECKLINEUPNEEDSSHOWUPGRADE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::DMHILEFFPFL a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::DMHILEFFPFL, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEHELPER_GETUPGRADEAVAILABLEAVATAR_OFFSET))(a1, a2);
		}

	};
}
