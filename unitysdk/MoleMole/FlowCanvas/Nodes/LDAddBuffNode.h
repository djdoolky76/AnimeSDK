#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDBUFFNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465B460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDBUFFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465B740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddBuffNode_TypeDefinitionIndex = 89033;

	class LDAddBuffNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDBUFFNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Int32 BuffID, ::System::Single Duration, ::MoleMole::Config::ModifierStacking Stacking)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::MoleMole::Config::ModifierStacking))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDBUFFNODE_INVOKE_OFFSET))(this, entity, BuffID, Duration, Stacking);
		}
	};
}
