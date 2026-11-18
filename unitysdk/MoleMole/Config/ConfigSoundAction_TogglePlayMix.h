#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6D90A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GETPLAYMIXDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C6D9430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1C6D8F90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1C6D8F50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1C6D8FA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C6D9670)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D9770)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__EXECUTEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6D92F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1C6D97B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C6D97C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_TogglePlayMix_TypeDefinitionIndex = 55515;

	class ConfigSoundAction_TogglePlayMix : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Boolean isOn; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single delayTime; // 0x24
		::System::Int32 playMix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_EXECUTE_OFFSET))(this, context);
		}

		::System::Void _ExecuteInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__EXECUTEINTERNAL_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetPlayMixDropDown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GETPLAYMIXDROPDOWN_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
