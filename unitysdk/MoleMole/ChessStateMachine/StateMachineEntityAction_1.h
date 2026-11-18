#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineEntityAction_1_TypeDefinitionIndex = 56391;

	template <typename T>
	class StateMachineEntityAction_1 : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		T RunningData; // 0x0
	};
}
