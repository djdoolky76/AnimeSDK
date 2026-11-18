#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1924E0B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1924E0A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1924E060)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1924E350)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1924E410)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1924E450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetGlobalRTPC_TypeDefinitionIndex = 85862;

	class ConfigSoundAction_SetGlobalRTPC : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* rtpcName; // 0x20
		::System::Boolean setDurationOrFadeCurve; // 0x28
		::System::Byte _padding0[0x3];
		::AkCurveInterpolation fadeCurve; // 0x2C
		::System::Single rtpcValue; // 0x30
		::System::Int32 valueChangeDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
