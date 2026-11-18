#pragma once
#include "unitysdk/unitysdk.h"

class CMJKDHNDLBM;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11E6F860)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6FC80)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridVisibleAction_TypeDefinitionIndex = 52823;

	class GridVisibleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::CMJKDHNDLBM* context)
		{
			return ((::System::Void(*)(::PVOID, ::CMJKDHNDLBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUN_OFFSET))(this, context);
		}
	};
}
