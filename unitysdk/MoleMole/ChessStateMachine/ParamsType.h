#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 73019;

	enum class ParamsType : ::System::Int32
	{
		Bool = 0,
		Int = 2,
		Trigger = 3,
		OnceTrigger = 4,
		Float = 1,
		NULL = 5,
	};
}
