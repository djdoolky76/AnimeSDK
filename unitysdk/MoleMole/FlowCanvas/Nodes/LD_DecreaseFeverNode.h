#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14309FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1430A1C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DecreaseFeverNode_TypeDefinitionIndex = 64342;

	class LD_DecreaseFeverNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Single Amount, ::System::Single Percentage)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASEFEVERNODE_INVOKE_OFFSET))(this, entity, Amount, Percentage);
		}
	};
}
