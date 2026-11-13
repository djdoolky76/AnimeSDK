#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Net::Http::Headers { class TransferCodingHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC62C0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC62F0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONCLOSE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1FFC6300)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONKEEPALIVE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1FFC6320)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_EXPECTCONTINUE_B__29_0_OFFSET UNITYSDK_OFFSET(0x1FFC6340)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_TRANSFERENCODINGCHUNKED_B__71_0_OFFSET UNITYSDK_OFFSET(0x1FFC6370)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpRequestHeaders___c_TypeDefinitionIndex = 3798;

	class HttpRequestHeaders___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>** StaticGet___9__71_0()
		{
			return (::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x39040);
		}

		static ::System::Predicate_1<::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::System::String*>**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x39048);
		}

		static ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>** StaticGet___9__29_0()
		{
			return (::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x39050);
		}

		static ::System::Predicate_1<::System::String*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::System::String*>**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x39058);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Net.Http.Headers", "<>c")->GetStaticField(0x39060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ConnectionClose_b__19_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONCLOSE_B__19_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_ConnectionKeepAlive_b__22_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_CONNECTIONKEEPALIVE_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_ExpectContinue_b__29_0(::System::Net::Http::Headers::TransferCodingHeaderValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_EXPECTCONTINUE_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_TransferEncodingChunked_b__71_0(::System::Net::Http::Headers::TransferCodingHeaderValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS___C__GET_TRANSFERENCODINGCHUNKED_B__71_0_OFFSET))(this, a1);
		}

	};
}
