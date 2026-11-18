#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EFCLogLevel_TypeDefinitionIndex = 92975;

	enum class EFCLogLevel : ::System::Int32
	{
		Info = 0,
		Error = 2,
		Warning = 1,
	};
}
