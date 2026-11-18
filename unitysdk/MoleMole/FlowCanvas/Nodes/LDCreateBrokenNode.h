#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16230A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16231050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateBrokenNode_TypeDefinitionIndex = 56501;

	class LDCreateBrokenNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::System::Int32 monsterId, ::System::String* anchor)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEBROKENNODE_INVOKE_OFFSET))(this, monsterId, anchor);
		}
	};
}
