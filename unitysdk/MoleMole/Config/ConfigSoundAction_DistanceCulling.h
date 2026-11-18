#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A03D6E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1A03D600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1A03D5C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A03D660)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A03DBF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_WALK_OFFSET UNITYSDK_OFFSET(0x1A03DC70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03DD50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1A03DD90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x1A03DDA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A03DDB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1A03DDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DistanceCulling_TypeDefinitionIndex = 55570;

	class ConfigSoundAction_DistanceCulling : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Single distance; // 0x28
		::System::Boolean _passed; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
