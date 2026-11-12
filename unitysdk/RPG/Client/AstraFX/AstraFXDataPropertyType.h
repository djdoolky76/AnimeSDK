#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataPropertyType_TypeDefinitionIndex = 75805;

	enum class AstraFXDataPropertyType : ::System::Int32
	{
		Buffer = 0,
		Texture = 1,
	};
}
