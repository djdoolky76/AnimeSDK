#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_CHECK_OFFSET UNITYSDK_OFFSET(0x1EAE4D60)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_TRYCHECK_OFFSET UNITYSDK_OFFSET(0x1EAE4F40)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Token_TypeDefinitionIndex = 26098;

	class Parser_Token : public ::System::Object
	{
	public:
		static ::System::Void Check(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_CHECK_OFFSET))(s);
		}

		static ::System::Boolean TryCheck(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_TOKEN_TRYCHECK_OFFSET))(s);
		}
	};
}
