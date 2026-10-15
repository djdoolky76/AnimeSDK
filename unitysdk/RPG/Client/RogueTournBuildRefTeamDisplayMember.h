#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }

namespace RPG::Client
{
	struct alignas(8) RogueTournBuildRefTeamDisplayMember
	{
		::RPG::Client::IRogueTournBuildRefTeamMemberData* MemberData; // 0x10
		::System::Boolean IsInvalidForRecom; // 0x18
	};
}
