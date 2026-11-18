#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERFEVERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A092410)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERFEVERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162C3B10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RecoverFeverNode_TypeDefinitionIndex = 67749;

	class LD_RecoverFeverNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERFEVERNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Single Amount, ::System::Single Percentage, ::System::Boolean IgnoreRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECOVERFEVERNODE_INVOKE_OFFSET))(this, entity, Amount, Percentage, IgnoreRatio);
		}
	};
}
