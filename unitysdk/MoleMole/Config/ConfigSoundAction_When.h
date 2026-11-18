#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19B1E520)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x19B1E440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x19B1E400)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19B1E4A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19B1E650)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_WALK_OFFSET UNITYSDK_OFFSET(0x19B1E6D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1E7B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x19B1E7F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x19B1E800)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19B1E810)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x19B1E820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_When_TypeDefinitionIndex = 62428;

	class ConfigSoundAction_When : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ISoundActionTriggerCondition* condition; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
