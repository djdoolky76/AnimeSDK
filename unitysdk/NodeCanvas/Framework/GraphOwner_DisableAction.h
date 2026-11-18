#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_DisableAction_TypeDefinitionIndex = 29418;

	enum class GraphOwner_DisableAction : ::System::Int32
	{
		DisableBehaviour = 0,
		PauseBehaviour = 1,
		DoNothing = 2,
	};
}
