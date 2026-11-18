#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestType_TypeDefinitionIndex = 16684;

	enum class EQuestType : ::System::Int16
	{
		ArchiveBattle = 7,
		MainCity = 5,
		Hollow = 3,
		DungeonInner = 2,
		Knowledge = 8,
		Daily = 9,
		Manual = 4,
		ArchiveFile = 1,
		HollowChallenge = 6,
	};
}
