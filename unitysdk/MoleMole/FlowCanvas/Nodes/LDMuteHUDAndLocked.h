#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3AB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B060)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteHUDAndLocked_TypeDefinitionIndex = 46439;

	class LDMuteHUDAndLocked
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute, ::System::Boolean ignoreHUDAnim)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEHUDANDLOCKED_INVOKE_OFFSET))(this, entity, isMute, ignoreHUDAnim);
		}
	};
}
