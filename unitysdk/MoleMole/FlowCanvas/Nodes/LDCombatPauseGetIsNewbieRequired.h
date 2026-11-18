#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED_INVOKE_OFFSET UNITYSDK_OFFSET(0x142FA630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED__CTOR_OFFSET UNITYSDK_OFFSET(0x142FA670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetIsNewbieRequired_TypeDefinitionIndex = 80111;

	class LDCombatPauseGetIsNewbieRequired
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED_INVOKE_OFFSET))(this);
		}
	};
}
