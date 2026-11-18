#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAliveState_TypeDefinitionIndex = 90662;

	enum class CharacterAliveState : ::System::Int32
	{
		Unknown = -1,
		Dying = 4,
		MPDying = 5,
		Dead = 3,
		ExecuteCore = 2,
		DeadForHit = 1,
		Alive = 0,
	};
}
