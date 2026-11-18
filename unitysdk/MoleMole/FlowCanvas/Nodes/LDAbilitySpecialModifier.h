#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITYSPECIALMODIFIER_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D0B680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABILITYSPECIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0B880)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbilitySpecialModifier_TypeDefinitionIndex = 83541;

	class LDAbilitySpecialModifier
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITYSPECIALMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::String* abilityName, ::System::String* abilitySpecialParamName, ::MoleMole::Config::AbilitySpecialParamType abilitySpecialType, ::System::String* abilitySpecialParamValue)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABILITYSPECIALMODIFIER_INVOKE_OFFSET))(this, entity, abilityName, abilitySpecialParamName, abilitySpecialType, abilitySpecialParamValue);
		}
	};
}
