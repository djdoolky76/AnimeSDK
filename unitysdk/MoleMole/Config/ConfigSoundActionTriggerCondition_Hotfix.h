#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFAC86E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFAC86A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC8730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Hotfix_TypeDefinitionIndex = 49010;

	class ConfigSoundActionTriggerCondition_Hotfix : public ::System::Object
	{
	public:
		::System::String* key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_HOTFIX_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
