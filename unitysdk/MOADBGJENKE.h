#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MOADBGJENKE_TypeDefinitionIndex = 72697;

enum class MOADBGJENKE : ::System::Int32
{
	Unknown = -1,
	EmptyRound = 5,
	Success = 0,
	LastTurnNotOver = 3,
	NotInitialized = 1,
	NextTurnPaused = 4,
	NotStarted = 2,
};
