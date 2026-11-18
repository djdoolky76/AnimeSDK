#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LCBOMGPADKG_TypeDefinitionIndex = 65294;

enum class LCBOMGPADKG : ::System::Byte
{
	Attached = 2,
	Detached = 0,
	Detaching = 4,
	Stepping = 3,
	Faulted = 5,
	Attaching = 1,
};
