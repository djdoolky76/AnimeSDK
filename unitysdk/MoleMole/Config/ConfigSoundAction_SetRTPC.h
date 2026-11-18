#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A86A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1B8A8690)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1B8A8650)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A8A00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A8A90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A8AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetRTPC_TypeDefinitionIndex = 69585;

	class ConfigSoundAction_SetRTPC : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::AkCurveInterpolation fadeCurve; // 0x28
		::System::Int32 valueChangeDuration; // 0x2C
		::System::Single rtpcValue; // 0x30
		::System::Boolean setDurationOrFadeCurve; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETRTPC___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
