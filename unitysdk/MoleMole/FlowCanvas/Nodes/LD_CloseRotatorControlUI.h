#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F3450)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F35B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CloseRotatorControlUI_TypeDefinitionIndex = 56928;

	class LD_CloseRotatorControlUI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single delaySeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLOSEROTATORCONTROLUI_INVOKE_OFFSET))(this, delaySeconds);
		}
	};
}
