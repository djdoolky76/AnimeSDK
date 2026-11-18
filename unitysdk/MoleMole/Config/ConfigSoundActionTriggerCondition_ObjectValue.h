#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectValue_LAJGJLPIDMP.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFAC8950)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFAC8910)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC8D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectValue_TypeDefinitionIndex = 75791;

	class ConfigSoundActionTriggerCondition_ObjectValue : public ::System::Object
	{
	public:
		::System::String* valueName; // 0x10
		::System::String* value; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectValue_LAJGJLPIDMP matchMode; // 0x20
		::System::Boolean requireObject; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTVALUE_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
