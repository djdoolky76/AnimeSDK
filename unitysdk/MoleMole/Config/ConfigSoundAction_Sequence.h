#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6D88B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1C6D8600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1C6D85C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1C6D8760)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C6D8B20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_WALK_OFFSET UNITYSDK_OFFSET(0x1C6D8C80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8E50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1C6D8E90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1C6D8EA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C6D8EB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1C6D8EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Sequence_TypeDefinitionIndex = 51802;

	class ConfigSoundAction_Sequence : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundActionGeneral*>* actions; // 0x20
		::System::Boolean notParallel; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _currentActionIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
