#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token_Type.h"
namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_TOKEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFCC7A0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FFCC6C0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F63C50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 3800;

	struct alignas(4) Token
	{
		::System::Net::Http::Headers::Token_Type type; // 0x10
		::System::Int32 _StartPosition_k__BackingField; // 0x14
		::System::Int32 _EndPosition_k__BackingField; // 0x18
		static ::System::Net::Http::Headers::Token* StaticGet_Empty()
		{
			return (::System::Net::Http::Headers::Token*)UnitySDK::FromName("System.Net.Http.Headers", "Token")->GetStaticField(0xB560);
		}

		::System::Void _ctor(::System::Net::Http::Headers::Token_Type a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::Token_Type, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_CCTOR_OFFSET))();
		}

		::System::Int32 get_StartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_EndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET))(this);
		}

		::System::Void set_EndPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET))(this, a1);
		}

		::System::Net::Http::Headers::Token_Type get_Kind()
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET))(this);
		}

		/*
		static ::System::Net::Http::Headers::Token_Type op_Implicit(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::Net::Http::Headers::Token_Type(*)(::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET))(this);
		}

	};
}
