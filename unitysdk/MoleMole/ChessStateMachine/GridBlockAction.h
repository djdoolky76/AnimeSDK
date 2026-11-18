#pragma once
#include "unitysdk/unitysdk.h"

class CMJKDHNDLBM;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x18B81EE0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUN_OFFSET UNITYSDK_OFFSET(0x18B81B30)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18B81F40)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x18B81F60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridBlockAction_TypeDefinitionIndex = 84579;

	class GridBlockAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::CMJKDHNDLBM* context)
		{
			return ((::System::Void(*)(::PVOID, ::CMJKDHNDLBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
