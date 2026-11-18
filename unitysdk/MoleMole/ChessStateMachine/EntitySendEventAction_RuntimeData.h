#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x6E9160)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int EntitySendEventAction_RuntimeData_TypeDefinitionIndex = 45547;

	struct alignas(4) EntitySendEventAction_RuntimeData
	{
		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
