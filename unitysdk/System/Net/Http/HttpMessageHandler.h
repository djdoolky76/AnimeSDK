#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x2010E6E0)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x2010E7B0)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20113A90)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageHandler_TypeDefinitionIndex = 3769;

	class HttpMessageHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET))(this, a1);
		}

	};
}
