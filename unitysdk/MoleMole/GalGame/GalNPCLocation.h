#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalNPCLocation_TypeDefinitionIndex = 86686;

	enum class GalNPCLocation : ::System::Int32
	{
		Left = 0,
		Right = 2,
		Middle = 1,
	};
}
