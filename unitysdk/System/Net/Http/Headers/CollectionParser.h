#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1EADF5D0)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1EADF550)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionParser_TypeDefinitionIndex = 26070;

	class CollectionParser : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse_1(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::String*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_1_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseStringElement(::System::Net::Http::Headers::Lexer* lexer, ::System::String*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::String*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET))(lexer, parsedValue, t);
		}
	};
}
