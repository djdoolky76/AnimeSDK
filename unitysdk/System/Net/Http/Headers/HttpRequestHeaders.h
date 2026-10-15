#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaders.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Net::Http::Headers { class HttpRequestHeaders; }
namespace System::Net::Http::Headers { class TransferCodingHeaderValue; }
namespace System::Net::Http::Headers { template <typename T> class HttpHeaderValueCollection_1; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET UNITYSDK_OFFSET(0x1EE54E30)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE54690)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET UNITYSDK_OFFSET(0x1EE547A0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1EE54960)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1EE54780)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x1EE54AD0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1EE54C70)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET UNITYSDK_OFFSET(0x1EE54CB0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1EE54C50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpRequestHeaders_TypeDefinitionIndex = 3797;

	class HttpRequestHeaders : public ::System::Net::Http::Headers::HttpHeaders
	{
	public:
		::System::Nullable* expectContinue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_CTOR_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::String*>* get_Connection()
		{
			return ((::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET))(this);
		}

		::System::Nullable* get_ConnectionClose()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET))(this);
		}

		::System::Boolean get_ConnectionKeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONKEEPALIVE_OFFSET))(this);
		}

		::System::Nullable* get_ExpectContinue()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* get_TransferEncoding()
		{
			return ((::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Nullable* get_TransferEncodingChunked()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET))(this);
		}

		::System::Void AddHeaders(::System::Net::Http::Headers::HttpRequestHeaders* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::HttpRequestHeaders*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET))(this, a1);
		}

	};
}
