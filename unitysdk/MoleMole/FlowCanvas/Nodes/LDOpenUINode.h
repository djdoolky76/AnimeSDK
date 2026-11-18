#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1356CCF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1356CDC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOpenUINode_TypeDefinitionIndex = 43709;

	class LDOpenUINode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE_INVOKE_OFFSET))(this);
		}
	};
}
