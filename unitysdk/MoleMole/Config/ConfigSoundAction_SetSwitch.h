#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A9260)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1B8A9250)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B8A9210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A9450)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9590)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A95D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetSwitch_TypeDefinitionIndex = 79707;

	class ConfigSoundAction_SetSwitch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* switchGroup; // 0x20
		::System::String* switchValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
