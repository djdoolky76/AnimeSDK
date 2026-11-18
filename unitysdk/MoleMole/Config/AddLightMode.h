#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 49152;

	enum class AddLightMode : ::System::Int32
	{
		Toon = 3,
		Ambient = 2,
		Blend = 1,
	};
}
