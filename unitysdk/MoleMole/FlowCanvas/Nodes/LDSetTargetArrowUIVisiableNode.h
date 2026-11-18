#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetArrowUIKind.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B5FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B61F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetArrowUIVisiableNode_TypeDefinitionIndex = 80485;

	class LDSetTargetArrowUIVisiableNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::FlowCanvas::Nodes::TargetUIOperation operation, ::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind uiKind)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::TargetUIOperation, ::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETARROWUIVISIABLENODE_INVOKE_OFFSET))(this, operation, uiKind);
		}
	};
}
