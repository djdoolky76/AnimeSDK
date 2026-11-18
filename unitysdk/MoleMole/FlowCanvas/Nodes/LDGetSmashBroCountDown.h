#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BDC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BDEE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSmashBroCountDown_TypeDefinitionIndex = 63154;

	class LDGetSmashBroCountDown
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN_INVOKE_OFFSET))(this);
		}
	};
}
