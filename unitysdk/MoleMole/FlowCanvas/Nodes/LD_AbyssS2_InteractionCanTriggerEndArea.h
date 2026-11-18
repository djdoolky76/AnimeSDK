#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16240110)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x162401B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_InteractionCanTriggerEndArea_TypeDefinitionIndex = 38588;

	class LD_AbyssS2_InteractionCanTriggerEndArea
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONCANTRIGGERENDAREA_INVOKE_OFFSET))(this);
		}
	};
}
