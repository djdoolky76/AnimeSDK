#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x127856B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12785560)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x127855A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12785940)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x12785B10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x12785B50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12785B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Prepare_TypeDefinitionIndex = 64421;

	class ConfigSoundAction_Prepare : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* events; // 0x20
		::System::String* tag; // 0x28
		::System::Boolean useEventsList; // 0x30
		::System::Boolean unprepare; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
