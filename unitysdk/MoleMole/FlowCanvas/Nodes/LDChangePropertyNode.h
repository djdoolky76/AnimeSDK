#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244A800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1244A970)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangePropertyNode_TypeDefinitionIndex = 51663;

	class LDChangePropertyNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* propKey, ::System::Single val)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEPROPERTYNODE_INVOKE_OFFSET))(this, entity, propKey, val);
		}
	};
}
