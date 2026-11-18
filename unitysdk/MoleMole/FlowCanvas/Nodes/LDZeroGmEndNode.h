#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10418DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10418EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDZeroGmEndNode_TypeDefinitionIndex = 46931;

	class LDZeroGmEndNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE_INVOKE_OFFSET))(this, success, performType);
		}
	};
}
