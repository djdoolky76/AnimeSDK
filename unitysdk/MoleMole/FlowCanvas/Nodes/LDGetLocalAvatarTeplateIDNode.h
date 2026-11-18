#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465D380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465D5F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLocalAvatarTeplateIDNode_TypeDefinitionIndex = 70854;

	class LDGetLocalAvatarTeplateIDNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE_INVOKE_OFFSET))(this);
		}
	};
}
