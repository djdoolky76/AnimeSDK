#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/MoleMole/Config/DynamicArgumentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1908CA60)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GET_SPECIALVALUE_OFFSET UNITYSDK_OFFSET(0x1908C970)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1908CAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry_TypeDefinitionIndex = 85854;

	class AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry : public ::System::Object
	{
	public:
		::System::String* stringValue; // 0x10
		::System::String* AbilitySpecialName; // 0x18
		::MoleMole::Config::DynamicArgumentType ArgumentType; // 0x20
		::System::Single floatValue; // 0x24
		::System::Int32 intValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY__CTOR_OFFSET))(this);
		}

		::System::Object* get_SpecialValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GET_SPECIALVALUE_OFFSET))(this);
		}

		::BLPJECICNDE GetValueType()
		{
			return ((::BLPJECICNDE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYENTRY_ABILITYSPECIALVALUEENTRY_GETVALUETYPE_OFFSET))(this);
		}
	};
}
