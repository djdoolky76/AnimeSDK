#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFAC99B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFAC9880)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xFAC98C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC9C70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC9D00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xFAC9D40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC9D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SeekOnEvent_TypeDefinitionIndex = 89728;

	class ConfigSoundAction_SeekOnEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* eventName; // 0x20
		::System::Boolean isGlobal; // 0x28
		::System::Boolean isUsedPercent; // 0x29
		::System::Boolean seekToNearestMarker; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single desirePercent; // 0x2C
		::System::Int32 desirePosition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEEKONEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
