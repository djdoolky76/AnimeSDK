#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELEXITNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C0230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELEXITNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C0330)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelExitNode_TypeDefinitionIndex = 70094;

	class LDLevelExitNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELEXITNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELEXITNODE_INVOKE_OFFSET))(this);
		}
	};
}
