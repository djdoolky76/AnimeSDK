#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A76A820)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A76A480)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A76A4C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A76AAF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76ABF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A76AC30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A76AC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_VoiceStandby_TypeDefinitionIndex = 64235;

	class ConfigSoundAction_VoiceStandby : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* controlTag; // 0x20
		::Il2CppArray<::System::String*>* voiceKeys; // 0x28
		::System::Single cooldownSec; // 0x30
		::System::Boolean random; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICESTANDBY___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
