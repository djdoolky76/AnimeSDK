#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1641CCC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1641CC80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1641D3B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_WALK_OFFSET UNITYSDK_OFFSET(0x1641D430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1641D510)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1641D550)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1641D560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StayStatic_TypeDefinitionIndex = 68069;

	class ConfigSoundAction_StayStatic : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
