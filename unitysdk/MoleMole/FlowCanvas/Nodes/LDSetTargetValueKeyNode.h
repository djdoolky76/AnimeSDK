#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUEKEYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x119109C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUEKEYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11910B40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetValueKeyNode_TypeDefinitionIndex = 81330;

	class LDSetTargetValueKeyNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUEKEYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* target, ::System::String* key, ::System::Boolean resetDynamicValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETVALUEKEYNODE_INVOKE_OFFSET))(this, target, key, resetDynamicValue);
		}
	};
}
