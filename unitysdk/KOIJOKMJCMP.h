#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KOIJOKMJCMP_TypeDefinitionIndex = 91780;

enum class KOIJOKMJCMP : ::System::Int32
{
	None = 0,
	Restock = 6,
	InsufficientOfMaterial = 4,
	Upgrade = 2,
	InsufficientOfCurrency = 3,
	InsufficientOfMaterialAndCurrency = 5,
	Lock = 1,
};
