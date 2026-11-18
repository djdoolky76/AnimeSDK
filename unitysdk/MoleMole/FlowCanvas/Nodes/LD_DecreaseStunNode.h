#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESTUNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13577BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESTUNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13577DF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DecreaseStunNode_TypeDefinitionIndex = 42395;

	class LD_DecreaseStunNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESTUNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DECREASESTUNNODE_INVOKE_OFFSET))(this, entity, Amount, Percentage, IgnoreRatio);
		}
	};
}
