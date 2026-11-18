#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETDUELAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DF760)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETDUELAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x139DF8A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetDuelAvatar_TypeDefinitionIndex = 43916;

	class LDSetDuelAvatar
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETDUELAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* ally, ::System::Boolean isPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETDUELAVATAR_INVOKE_OFFSET))(this, ally, isPlayer);
		}
	};
}
