#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A7450)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1B8A7440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B8A73F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B8A7430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A74A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7530)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A7570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Hotfix_TypeDefinitionIndex = 62336;

	class ConfigSoundAction_Hotfix : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* key; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_HOTFIX___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
