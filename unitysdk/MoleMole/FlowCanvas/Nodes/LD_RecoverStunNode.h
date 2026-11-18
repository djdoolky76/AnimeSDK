#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSTUNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDF6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSTUNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDF8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RecoverStunNode_TypeDefinitionIndex = 73913;

	class LD_RecoverStunNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSTUNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERSTUNNODE_INVOKE_OFFSET))(this, entity, Amount, Percentage, IgnoreRatio);
		}
	};
}
