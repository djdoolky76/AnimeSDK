#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12786760)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x12786600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x127865C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12786B10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET UNITYSDK_OFFSET(0x12786CC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x12786EA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x12786EE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12786EF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x12786F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_TypeDefinitionIndex = 61306;

	class ConfigSoundAction_RtpcBranch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* branchList; // 0x20
		::System::String* rtpcName; // 0x28
		::System::Boolean useGlobal; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single defaultValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
