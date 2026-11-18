#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C6850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130C6980)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetIsImmersiveMode_TypeDefinitionIndex = 61430;

	class LDCombatPauseGetIsImmersiveMode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE_INVOKE_OFFSET))(this);
		}
	};
}
