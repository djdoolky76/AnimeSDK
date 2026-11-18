#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateNodeType_TypeDefinitionIndex = 56836;

	enum class StateNodeType : ::System::Int32
	{
		UpState = 4,
		Exit = 1,
		AnyState = 5,
		Entry = 0,
		State = 2,
		SubState = 3,
	};
}
