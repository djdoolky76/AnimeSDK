#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19B1C9D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x19B1C870)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19B1C830)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19B1C8D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19B1CA50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_RESETLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x19B1C980)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_WALK_OFFSET UNITYSDK_OFFSET(0x19B1CAD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1CBB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x19B1CBF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19B1CC00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19B1CC10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x19B1CC20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Limit_TypeDefinitionIndex = 41298;

	class ConfigSoundAction_Limit : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Int32 limitCount; // 0x28
		::System::Int32 executedCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void ResetLimitCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_RESETLIMITCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
