#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EMPNOFOFMEG_TypeDefinitionIndex = 54428;

enum class EMPNOFOFMEG : ::System::Int32
{
	Normal = 0,
	FeverModeDownLevelLock = 5,
	FeverModeReducing = 4,
	NormalDownLevelLock = 2,
	NormalReducing = 1,
	FeverMode = 3,
};
