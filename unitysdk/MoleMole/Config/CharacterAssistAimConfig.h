#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAimAssistEscapeConfig.h"
#include "unitysdk/MoleMole/Config/CharacterAimAutoTargeting.h"
#include "unitysdk/MoleMole/Config/CharacterAimSlowdown.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1652CFF0)
#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1652D060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAssistAimConfig_TypeDefinitionIndex = 77921;

	class CharacterAssistAimConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::CharacterAimAutoTargeting aimAutoTargeting; // 0x10
		::MoleMole::Config::CharacterAimSlowdown aimSlowdown; // 0x28
		::System::String* aimAssistTargetKey; // 0x48
		::System::Boolean enableMultiSnapPoints; // 0x50
		::System::Byte _padding0[0x3];
		::MoleMole::Config::CharacterAimAssistEscapeConfig escapeConfig; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* MoleMole_Config_ICharacterAssistAimConfig_get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET))(this);
		}
	};
}
