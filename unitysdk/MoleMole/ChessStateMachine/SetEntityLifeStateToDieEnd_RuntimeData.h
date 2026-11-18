#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x6FFE40)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetEntityLifeStateToDieEnd_RuntimeData_TypeDefinitionIndex = 45359;

	struct alignas(4) SetEntityLifeStateToDieEnd_RuntimeData
	{
		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
