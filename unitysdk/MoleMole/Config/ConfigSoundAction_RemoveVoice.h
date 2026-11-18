#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A7C10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1B8A7B90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B8A7B50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B8A7BA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A7EB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7F40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A7F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RemoveVoice_TypeDefinitionIndex = 64322;

	class ConfigSoundAction_RemoveVoice : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* controlTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_REMOVEVOICE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
