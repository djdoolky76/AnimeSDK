#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/MediaTypeHeaderValue.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class MediaTypeWithQualityHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE56620)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1EE56630)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE56760)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeWithQualityHeaderValue_TypeDefinitionIndex = 3805;

	class MediaTypeWithQualityHeaderValue : public ::System::Net::Http::Headers::MediaTypeHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* a2, ::System::Net::Http::Headers::Token a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

	};
}
