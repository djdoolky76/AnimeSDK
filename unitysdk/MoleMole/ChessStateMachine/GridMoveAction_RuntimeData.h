#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PNJDGHBEMLK;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x785D60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_RuntimeData_TypeDefinitionIndex = 67542;

	struct alignas(8) GridMoveAction_RuntimeData
	{
		::PNJDGHBEMLK* BindPiece; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
