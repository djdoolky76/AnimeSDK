#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_WEBVIEWNATIVERESULTPAYLOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0E850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewNativeResultPayload_TypeDefinitionIndex = 47633;

	class WebViewNativeResultPayload : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Int32 code; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWNATIVERESULTPAYLOAD_CTOR_OFFSET))(this);
		}

	};
}
