#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PerformType_TypeDefinitionIndex = 71726;

	enum class PerformType : ::System::Int32
	{
		Begin = 0,
		End = 1,
		Custom = 2,
	};
}
