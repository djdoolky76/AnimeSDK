#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAUTOMOVEBYVIRTUALINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12454800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAUTOMOVEBYVIRTUALINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x124549E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAutoMoveByVirtualInput_TypeDefinitionIndex = 87885;

	class LDSetAutoMoveByVirtualInput
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAUTOMOVEBYVIRTUALINPUT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean isEnable, ::UnityEngine::Vector2 virtualInput)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAUTOMOVEBYVIRTUALINPUT_INVOKE_OFFSET))(this, entity, isEnable, virtualInput);
		}
	};
}
