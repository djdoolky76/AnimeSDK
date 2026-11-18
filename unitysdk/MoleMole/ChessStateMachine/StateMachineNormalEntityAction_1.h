#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineNormalEntityAction_1_TypeDefinitionIndex = 66293;

	template <typename T>
	class StateMachineNormalEntityAction_1 : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		T RunningData; // 0x0
	};
}
