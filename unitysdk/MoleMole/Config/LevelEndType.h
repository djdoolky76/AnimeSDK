#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 61698;

	enum class LevelEndType : ::System::Int32
	{
		LevelFailed = 1,
		DirectKill = 2,
		IndirectKill = 3,
		Dialog = 5,
		Unknown = 0,
		Instant = 4,
	};
}
