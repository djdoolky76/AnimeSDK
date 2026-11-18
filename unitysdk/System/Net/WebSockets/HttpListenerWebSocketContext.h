#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/WebSocketContext.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Net { class CookieCollection; }
namespace System::Net::WebSockets { class WebSocket; }
namespace System::Security::Principal { class IPrincipal; }

#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_COPYPRINCIPAL_OFFSET UNITYSDK_OFFSET(0x1CFDACB0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_COOKIECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CFDAEC0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1CFDAE70)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1CFDAEE0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x1CFDAEF0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISSECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1CFDAF00)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1CFDAE80)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1CFDAE60)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETKEY_OFFSET UNITYSDK_OFFSET(0x1CFDAEB0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x1CFDAE90)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETVERSION_OFFSET UNITYSDK_OFFSET(0x1CFDAEA0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_USER_OFFSET UNITYSDK_OFFSET(0x1CFDAED0)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_WEBSOCKET_OFFSET UNITYSDK_OFFSET(0x1CFDAF10)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFDAF20)
#define SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDAB10)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int HttpListenerWebSocketContext_TypeDefinitionIndex = 3885;

	class HttpListenerWebSocketContext : public ::System::Net::WebSockets::WebSocketContext
	{
	public:
		::System::String* _secWebSocketKey; // 0x10
		::System::Collections::Specialized::NameValueCollection* _headers; // 0x18
		::System::Collections::Generic::IEnumerable_1<::System::String*>* _secWebSocketProtocols; // 0x20
		::System::Net::WebSockets::WebSocket* _webSocket; // 0x28
		::System::String* _secWebSocketVersion; // 0x30
		::System::Security::Principal::IPrincipal* _user; // 0x38
		::System::String* _origin; // 0x40
		::System::Net::CookieCollection* _cookieCollection; // 0x48
		::System::Uri* _requestUri; // 0x50
		::System::Boolean _isAuthenticated; // 0x58
		::System::Boolean _isLocal; // 0x59
		::System::Boolean _isSecureConnection; // 0x5A

		::System::Void _ctor(::System::Uri* requestUri, ::System::Collections::Specialized::NameValueCollection* headers, ::System::Net::CookieCollection* cookieCollection, ::System::Security::Principal::IPrincipal* user, ::System::Boolean isAuthenticated, ::System::Boolean isLocal, ::System::Boolean isSecureConnection, ::System::String* origin, ::System::Collections::Generic::IEnumerable_1<::System::String*>* secWebSocketProtocols, ::System::String* secWebSocketVersion, ::System::String* secWebSocketKey, ::System::Net::WebSockets::WebSocket* webSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Collections::Specialized::NameValueCollection*, ::System::Net::CookieCollection*, ::System::Security::Principal::IPrincipal*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::String*, ::System::String*, ::System::Net::WebSockets::WebSocket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT__CTOR_OFFSET))(this, requestUri, headers, cookieCollection, user, isAuthenticated, isLocal, isSecureConnection, origin, secWebSocketProtocols, secWebSocketVersion, secWebSocketKey, webSocket);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_Headers()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_Origin()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ORIGIN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_SecWebSocketProtocols()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETPROTOCOLS_OFFSET))(this);
		}

		::System::String* get_SecWebSocketVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETVERSION_OFFSET))(this);
		}

		::System::String* get_SecWebSocketKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_SECWEBSOCKETKEY_OFFSET))(this);
		}

		::System::Net::CookieCollection* get_CookieCollection()
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_COOKIECOLLECTION_OFFSET))(this);
		}

		::System::Security::Principal::IPrincipal* get_User()
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_USER_OFFSET))(this);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsSecureConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_ISSECURECONNECTION_OFFSET))(this);
		}

		::System::Net::WebSockets::WebSocket* get_WebSocket()
		{
			return ((::System::Net::WebSockets::WebSocket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_GET_WEBSOCKET_OFFSET))(this);
		}

		static ::System::Security::Principal::IPrincipal* CopyPrincipal(::System::Security::Principal::IPrincipal* user)
		{
			return ((::System::Security::Principal::IPrincipal*(*)(::System::Security::Principal::IPrincipal*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_HTTPLISTENERWEBSOCKETCONTEXT_COPYPRINCIPAL_OFFSET))(user);
		}
	};
}
