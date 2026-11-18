#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12783A40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x127839C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12783980)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x127839D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12783B90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x12783C20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12783C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ClearScope_TypeDefinitionIndex = 90839;

	class ConfigSoundAction_ClearScope : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* scopeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
