#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KOMLEDIDOMH_TypeDefinitionIndex = 79022;

enum class KOMLEDIDOMH : ::System::Byte
{
	Removing = 2,
	Stepping = 3,
	Adding = 1,
	Faulted = 5,
	ShuttingDown = 4,
	Disposed = 6,
	Ready = 0,
};
