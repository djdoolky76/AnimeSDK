#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE576F0)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE57720)
#define SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EE57730)

namespace System::Net::Http::Headers
{
	class Parser_DateTime___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x31D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C_CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__2_0(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_DATETIME___C___CCTOR_B__2_0_OFFSET))(this, a1);
		}

	};
}
