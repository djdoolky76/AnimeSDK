#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A03C690)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1A03C450)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A03C410)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A03C5F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A03CA00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET UNITYSDK_OFFSET(0x1A03CBF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03CE10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1A03CE50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A03CE60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A03CE70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1A03CE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Branch_TypeDefinitionIndex = 92131;

	class ConfigSoundAction_Branch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x20
		::System::String* _curScopeValue; // 0x28
		::System::String* scopeName; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* branchActions; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
