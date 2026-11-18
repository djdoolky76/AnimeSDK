#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ShootGamePatternEvent.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNDESTROY_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x119183C0)
#define MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x11918400)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OnEventPatternDestroy_TypeDefinitionIndex = 92471;

	class OnEventPatternDestroy : public ::MoleMole::FlowCanvas::Nodes::ShootGamePatternEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNDESTROY__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ONEVENTPATTERNDESTROY_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
