#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A75C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B8A7580)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A7890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_WALK_OFFSET UNITYSDK_OFFSET(0x1B8A7950)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7A30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A7A70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1B8A7A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Ongoing_TypeDefinitionIndex = 75339;

	class ConfigSoundAction_Ongoing : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* endAction; // 0x20
		::System::Int32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
