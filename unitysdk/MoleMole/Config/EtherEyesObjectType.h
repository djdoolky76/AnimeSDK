#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 77963;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Show = 2,
		Path = 4,
		Break = 0,
		Fix = 6,
		Find = 3,
		BreakCore = 1,
		PathWire = 5,
	};
}
