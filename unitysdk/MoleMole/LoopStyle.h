#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoopStyle_TypeDefinitionIndex = 90327;

	enum class LoopStyle : ::System::Int32
	{
		Loop = 1,
		Once = 0,
		PingPong = 2,
	};
}
