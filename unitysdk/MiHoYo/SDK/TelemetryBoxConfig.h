#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x39F8EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryBoxConfig_TypeDefinitionIndex = 11889;

	class TelemetryBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean datauploadEnable; // 0x10

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYBOXCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
