#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130CF6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130CF7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectIntFloatNode_TypeDefinitionIndex = 46479;

	class LDRandomSelectIntFloatNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTINTFLOATNODE_INVOKE_OFFSET))(this);
		}
	};
}
