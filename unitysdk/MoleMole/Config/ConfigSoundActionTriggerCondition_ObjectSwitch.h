#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectSwitch_MatchMode.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1641A790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1641A750)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1641ABF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectSwitch_TypeDefinitionIndex = 43312;

	class ConfigSoundActionTriggerCondition_ObjectSwitch : public ::System::Object
	{
	public:
		::System::String* switchGroup; // 0x10
		::System::String* switchValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectSwitch_MatchMode matchMode; // 0x20
		::System::Boolean requireObject; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_EVALUATE_OFFSET))(this, context);
		}
	};
}
