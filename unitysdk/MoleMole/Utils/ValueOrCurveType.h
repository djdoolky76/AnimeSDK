#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveType_TypeDefinitionIndex = 92411;

	enum class ValueOrCurveType : ::System::Int32
	{
		Curve = 1,
		Value = 0,
	};
}
