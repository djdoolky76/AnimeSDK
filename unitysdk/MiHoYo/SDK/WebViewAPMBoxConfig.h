#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWAPMBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3A69500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewAPMBoxConfig_TypeDefinitionIndex = 13056;

	class WebViewAPMBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean crash_capture_enable; // 0x10

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWAPMBOXCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
