#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Quality_TypeDefinitionIndex = 36823;

	enum class Grounding_Quality : ::System::Int32
	{
		Simple = 1,
		Balanced = 3,
		Fastest = 0,
		Best = 2,
	};
}
