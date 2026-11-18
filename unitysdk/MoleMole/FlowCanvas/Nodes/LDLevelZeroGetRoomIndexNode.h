#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelZeroGetRoomIndexNode_RoomFormat.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190DAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190DEE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroGetRoomIndexNode_TypeDefinitionIndex = 55507;

	class LDLevelZeroGetRoomIndexNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROGETROOMINDEXNODE_INVOKE_OFFSET))(this, format);
		}
	};
}
