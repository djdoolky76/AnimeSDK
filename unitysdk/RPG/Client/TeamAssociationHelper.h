#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xE1C25B0)

namespace RPG::Client
{
	class TeamAssociationHelper : public ::System::Object
	{
	public:
		static ::System::Void SwitchTeamAssociationShowState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET))();
		}

	};
}
