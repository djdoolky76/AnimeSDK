#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CalculationMode_TypeDefinitionIndex = 37453;

	enum class CalculationMode : ::System::Int32
	{
		Precise = 1,
		Fast = 0,
	};
}
