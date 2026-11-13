#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class ViaHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCD180)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFCD2B0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFCD380)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1FFCD190)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLNAME_OFFSET UNITYSDK_OFFSET(0x1FFCD1B0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1FFCD1D0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_RECEIVEDBY_OFFSET UNITYSDK_OFFSET(0x1FFCD1F0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1FFCD1A0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLNAME_OFFSET UNITYSDK_OFFSET(0x1FFCD1C0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1FFCD1E0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_RECEIVEDBY_OFFSET UNITYSDK_OFFSET(0x1FFCD200)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFCD210)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFCDA00)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1FFCD690)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1FFCD5F0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ViaHeaderValue_TypeDefinitionIndex = 3829;

	class ViaHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Comment_k__BackingField; // 0x10
		::System::String* _ReceivedBy_k__BackingField; // 0x18
		::System::String* _ProtocolVersion_k__BackingField; // 0x20
		::System::String* _ProtocolName_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_CTOR_OFFSET))(this);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_COMMENT_OFFSET))(this, a1);
		}

		::System::String* get_ProtocolName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLNAME_OFFSET))(this);
		}

		::System::Void set_ProtocolName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLNAME_OFFSET))(this, a1);
		}

		::System::String* get_ProtocolVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLVERSION_OFFSET))(this, a1);
		}

		::System::String* get_ReceivedBy()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_RECEIVEDBY_OFFSET))(this);
		}

		::System::Void set_ReceivedBy(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_RECEIVEDBY_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::ViaHeaderValue* a2, ::System::Net::Http::Headers::Token a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ViaHeaderValue*, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET))(this);
		}

	};
}
