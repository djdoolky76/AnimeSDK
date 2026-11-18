#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Switch.h"
#include "unitysdk/System/Diagnostics/TraceLevel.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1EC4E650)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEERROR_OFFSET UNITYSDK_OFFSET(0x1EC4E700)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEINFO_OFFSET UNITYSDK_OFFSET(0x1EC4E780)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEVERBOSE_OFFSET UNITYSDK_OFFSET(0x1EC4E7C0)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEWARNING_OFFSET UNITYSDK_OFFSET(0x1EC4E740)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_ONSWITCHSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E800)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E860)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1EC4E690)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC4E5E0)
#define SYSTEM_DIAGNOSTICS_TRACESWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC494C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceSwitch_TypeDefinitionIndex = 2773;

	class TraceSwitch : public ::System::Diagnostics::Switch
	{
	public:
		::System::Void _ctor(::System::String* displayName, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH__CTOR_OFFSET))(this, displayName, description);
		}

		::System::Void _ctor_1(::System::String* displayName, ::System::String* description, ::System::String* defaultSwitchValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH__CTOR_1_OFFSET))(this, displayName, description, defaultSwitchValue);
		}

		::System::Diagnostics::TraceLevel get_Level()
		{
			return ((::System::Diagnostics::TraceLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Diagnostics::TraceLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_TraceError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEERROR_OFFSET))(this);
		}

		::System::Boolean get_TraceWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEWARNING_OFFSET))(this);
		}

		::System::Boolean get_TraceInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEINFO_OFFSET))(this);
		}

		::System::Boolean get_TraceVerbose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_GET_TRACEVERBOSE_OFFSET))(this);
		}

		::System::Void OnSwitchSettingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_ONSWITCHSETTINGCHANGED_OFFSET))(this);
		}

		::System::Void OnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_ONVALUECHANGED_OFFSET))(this);
		}
	};
}
