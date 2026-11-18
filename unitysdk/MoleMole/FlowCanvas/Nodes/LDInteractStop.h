#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTSTOP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465DF20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTSTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1465E030)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInteractStop_TypeDefinitionIndex = 79037;

	class LDInteractStop
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTSTOP__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean active)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTSTOP_INVOKE_OFFSET))(this, entity, active);
		}
	};
}
