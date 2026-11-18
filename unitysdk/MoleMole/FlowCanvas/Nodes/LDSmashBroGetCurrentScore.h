#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14662DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x14662F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSmashBroGetCurrentScore_TypeDefinitionIndex = 53017;

	class LDSmashBroGetCurrentScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBROGETCURRENTSCORE_INVOKE_OFFSET))(this);
		}
	};
}
