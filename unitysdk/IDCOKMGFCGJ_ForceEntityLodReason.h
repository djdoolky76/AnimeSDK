#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IDCOKMGFCGJ_ForceEntityLodReason_TypeDefinitionIndex = 58480;

	enum class IDCOKMGFCGJ_ForceEntityLodReason : ::System::Int32
	{
		Default = 0,
		Performance = 1,
		FiveDim = 2,
		Manager = 3,
		LittleGameSandboxHiddenArt = 4,
		LittleGameSandboxHighestLod = 5,
		RollerCoaster = 6,
		Count = 7,
	};
