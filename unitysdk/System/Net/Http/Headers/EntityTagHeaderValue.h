#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http::Headers { class EntityTagHeaderValue; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE21310)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE20C00)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE20CF0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EE20DB0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x1EE20C10)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1EE20C30)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x1EE20C20)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1EE20C40)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EE20C50)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EE212C0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1EE20F00)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1EE21220)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1EE20E40)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int EntityTagHeaderValue_TypeDefinitionIndex = 3784;

	class EntityTagHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Tag_k__BackingField; // 0x10
		::System::Boolean _IsWeak_k__BackingField; // 0x18
		static ::System::Net::Http::Headers::EntityTagHeaderValue** StaticGet_any()
		{
			return (::System::Net::Http::Headers::EntityTagHeaderValue**)UnitySDK::FromName("System.Net.Http.Headers", "EntityTagHeaderValue")->GetStaticField(0x2010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsWeak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET))(this);
		}

		::System::Void set_IsWeak(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::EntityTagHeaderValue* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::EntityTagHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::EntityTagHeaderValue* a2, ::System::Net::Http::Headers::Token a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::EntityTagHeaderValue*, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_1_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET))(this);
		}

	};
}
