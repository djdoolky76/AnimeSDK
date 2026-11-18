#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICJAFAFMBJG_DEHNIOCIIKL.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D38F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139D3B30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbilitiesConfig_TypeDefinitionIndex = 40724;

	class LDAbilitiesConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::ICJAFAFMBJG_DEHNIOCIIKL type, ::Il2CppArray<::System::Int32>* abilityIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::ICJAFAFMBJG_DEHNIOCIIKL, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITIESCONFIG_INVOKE_OFFSET))(this, entity, type, abilityIDs);
		}
	};
}
