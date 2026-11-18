#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 54752;

	enum class CompareType : ::System::Int32
	{
		Greater = 0,
		Equal = 2,
		LessEquals = 4,
		Less = 1,
		NotEqual = 5,
		GreaterEqual = 3,
	};
}
