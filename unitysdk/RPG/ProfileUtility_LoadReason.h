#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int ProfileUtility_LoadReason_TypeDefinitionIndex = 35151;

	enum class ProfileUtility_LoadReason : ::System::UInt32
	{
		Unknown = 0,
		Undefined = 1,
		LoadResource = 2,
		LoadMap = 4,
		LoadAction = 8,
		SyncLoadUI = 16,
		AsyncLoadUI = 32,
		SetupViewUI = 64,
		TabChangeUI = 128,
		All = 4294967295,
	};
}
