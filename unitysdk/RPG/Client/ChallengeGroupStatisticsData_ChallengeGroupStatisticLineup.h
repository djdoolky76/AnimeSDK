#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(8) ChallengeGroupStatisticsData_ChallengeGroupStatisticLineup
	{
		::Il2CppArray<::System::UInt32>* AvatarIDs; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarLevels; // 0x18
		::Il2CppArray<::System::UInt32>* AvatarSkins; // 0x20
	};
}
