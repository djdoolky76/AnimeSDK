#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTimeOffset.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE29CF0)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE29C40)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_DateTime_TypeDefinitionIndex = 3810;

	class Parser_DateTime : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet_ToString()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("System.Net.Http.Headers", "DateTime")->GetStaticField(0x20A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME_CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME_TRYPARSE_OFFSET))(a1, a2);
		}

	};
}
