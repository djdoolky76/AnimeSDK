#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B92C6A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B92C300)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B92C340)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B92C970)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92CA70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1B92CAB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B92CAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_VoiceGroup_TypeDefinitionIndex = 82908;

	class ConfigSoundAction_VoiceGroup : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* controlTag; // 0x20
		::Il2CppArray<::System::String*>* voiceKeys; // 0x28
		::System::Boolean enqueue; // 0x30
		::System::Boolean random; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single cooldownSec; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_VOICEGROUP___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
