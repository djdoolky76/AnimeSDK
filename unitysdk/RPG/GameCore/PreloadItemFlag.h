#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemFlag_TypeDefinitionIndex = 16506;

	enum class PreloadItemFlag : ::System::UInt32
	{
		None = 0,
		Temp = 1,
		UI = 2,
		Maze = 4,
		Battle = 8,
		BattleNew = 16,
		Common = 32,
		Skill = 64,
		Ultra = 128,
		Passive = 256,
		Insert = 512,
		Model = 1024,
		Misc = 2048,
		Ability = 4096,
		AnimEvent = 8192,
		NoUse = 16384,
	};
}
