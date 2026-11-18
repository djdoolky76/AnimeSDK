#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B343A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI__CTOR_OFFSET UNITYSDK_OFFSET(0x12B34510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetEntityUI_TypeDefinitionIndex = 49413;

	class LDDestroyTargetEntityUI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETENTITYUI_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
