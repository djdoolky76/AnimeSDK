#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10403750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x104037F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAIActive_TypeDefinitionIndex = 55431;

	class LDAIActive
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean active)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAIACTIVE_INVOKE_OFFSET))(this, entity, active);
		}
	};
}
