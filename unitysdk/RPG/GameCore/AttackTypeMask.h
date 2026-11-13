#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackTypeMask_TypeDefinitionIndex = 10422;

	enum class AttackTypeMask : ::System::UInt32
	{
		None = 0,
		Begin = 2,
		Normal = 2,
		BPSkill = 4,
		Ultra = 8,
		QTE = 16,
		DOT = 32,
		Pursued = 64,
		Maze = 128,
		MazeNormal = 256,
		Insert = 512,
		ElementDamage = 1024,
		Level = 2048,
		Servant = 4096,
		TrueDamage = 8192,
		ElationDamage = 16384,
		Assist = 32768,
		End = 65536,
	};
}
