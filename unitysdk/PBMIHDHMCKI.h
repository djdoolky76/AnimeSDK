#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PBMIHDHMCKI_TypeDefinitionIndex = 94222;

enum class PBMIHDHMCKI : ::System::Byte
{
	Completed = 3,
	None = 0,
	ReadyForTeardown = 2,
	Started = 1,
};
