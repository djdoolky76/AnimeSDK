#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_State_MatchMode.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1641AC40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1641AC00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1641AE90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_State_TypeDefinitionIndex = 54944;

	class ConfigSoundActionTriggerCondition_State : public ::System::Object
	{
	public:
		::System::String* stateGroup; // 0x10
		::System::String* stateValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_State_MatchMode matchMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_EVALUATE_OFFSET))(this, context);
		}
	};
}
