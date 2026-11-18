#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190D730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190D890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHandleTargetUINode_TypeDefinitionIndex = 89156;

	class LDHandleTargetUINode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::FlowCanvas::Nodes::TargetUIOperation operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLETARGETUINODE_INVOKE_OFFSET))(this, operation);
		}
	};
}
