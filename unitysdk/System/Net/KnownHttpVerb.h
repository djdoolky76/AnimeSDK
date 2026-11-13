#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Specialized { class ListDictionary; }
namespace System::Net { class KnownHttpVerb; }

#define SYSTEM_NET_KNOWNHTTPVERB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C41A020)
#define SYSTEM_NET_KNOWNHTTPVERB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41A000)
#define SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET UNITYSDK_OFFSET(0x1C3F0680)

namespace System::Net
{
	inline static constexpr unsigned int KnownHttpVerb_TypeDefinitionIndex = 2753;

	class KnownHttpVerb : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean ConnectRequest; // 0x18
		::System::Boolean ExpectNoContentResponse; // 0x19
		::System::Boolean RequireContentBody; // 0x1A
		::System::Boolean ContentBodyNotAllowed; // 0x1B
		static ::System::Collections::Specialized::ListDictionary** StaticGet_NamedHeaders()
		{
			return (::System::Collections::Specialized::ListDictionary**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20960);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_MkCol()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20968);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_Head()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20970);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_Get()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20978);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_Connect()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20980);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_Post()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20988);
		}

		static ::System::Net::KnownHttpVerb** StaticGet_Put()
		{
			return (::System::Net::KnownHttpVerb**)UnitySDK::FromName("System.Net", "KnownHttpVerb")->GetStaticField(0x20990);
		}

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_CCTOR_OFFSET))();
		}

		static ::System::Net::KnownHttpVerb* Parse(::System::String* a1)
		{
			return ((::System::Net::KnownHttpVerb*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET))(a1);
		}

	};
}
