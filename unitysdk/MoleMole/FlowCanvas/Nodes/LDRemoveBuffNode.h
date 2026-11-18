#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x143052A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14305450)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveBuffNode_TypeDefinitionIndex = 73346;

	class LDRemoveBuffNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Int32 BuffId, ::System::Int32 StackCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUFFNODE_INVOKE_OFFSET))(this, entity, BuffId, StackCount);
		}
	};
}
