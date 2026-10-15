#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/TransferCodingHeaderValue.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class TransferCodingWithQualityHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2E5A0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1EE2E650)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE2E5B0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingWithQualityHeaderValue_TypeDefinitionIndex = 3828;

	class TransferCodingWithQualityHeaderValue : public ::System::Net::Http::Headers::TransferCodingHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue* a2, ::System::Net::Http::Headers::Token a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

	};
}
