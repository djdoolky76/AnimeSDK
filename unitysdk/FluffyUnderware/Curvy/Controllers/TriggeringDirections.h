#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TriggeringDirections_TypeDefinitionIndex = 37649;

	enum class TriggeringDirections : ::System::Int32
	{
		Forward = 1,
		Backward = 2,
		All = 0,
	};
}
