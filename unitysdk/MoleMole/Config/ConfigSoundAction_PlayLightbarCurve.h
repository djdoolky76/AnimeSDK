#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFAC9180)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFAC9130)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xFAC9170)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC94A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC9530)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC9570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PlayLightbarCurve_TypeDefinitionIndex = 44235;

	class ConfigSoundAction_PlayLightbarCurve : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* curveName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PLAYLIGHTBARCURVE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
