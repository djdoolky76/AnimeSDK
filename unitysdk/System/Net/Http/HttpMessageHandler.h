#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5ED80)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EE5EE30)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE64200)

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
