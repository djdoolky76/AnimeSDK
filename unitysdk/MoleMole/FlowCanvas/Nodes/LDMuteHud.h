#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1356C9F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD__CTOR_OFFSET UNITYSDK_OFFSET(0x1356CCD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteHud_TypeDefinitionIndex = 52691;

	class LDMuteHud
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::UInt32 entityId, ::System::Boolean isMute)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUD_INVOKE_OFFSET))(this, entity, entityId, isMute);
		}
	};
}
