#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 52712;

	enum class FeverSoundType : ::System::Int32
	{
		LevelDown = 2,
		MaxLevel = 0,
		LevelUp = 1,
		EnterFeverMode = 3,
		ExitFeverMode = 4,
	};
}
