#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x13577490)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x135774D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_InteractionTriggerEndSuddenEventEvent_TypeDefinitionIndex = 89528;

	class LD_AbyssS2_InteractionTriggerEndSuddenEventEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_INTERACTIONTRIGGERENDSUDDENEVENTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
