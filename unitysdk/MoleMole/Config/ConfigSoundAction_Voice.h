#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BA3C8B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1BA3C6E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1BA3C720)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1BA3CCD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3CDA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1BA3CDE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1BA3CDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Voice_TypeDefinitionIndex = 83069;

	class ConfigSoundAction_Voice : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* voiceMale; // 0x20
		::System::String* voiceKey; // 0x28
		::System::String* voiceFemale; // 0x30
		::System::Boolean queuePlay; // 0x38
		::System::Boolean gender; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
