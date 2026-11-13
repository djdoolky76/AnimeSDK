#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DecompressionMethods.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/HttpWebRequest_AuthorizationState.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Net/WebRequest.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class HttpContinueDelegate; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebAsyncResult; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebConnectionStream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebResponse; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1C410150)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1C40F770)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET UNITYSDK_OFFSET(0x1C40F460)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1C40F450)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C40F780)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C410950)
#define SYSTEM_NET_HTTPWEBREQUEST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C40DB70)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1C416730)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C415960)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKIFFORCEWRITE_OFFSET UNITYSDK_OFFSET(0x1C410770)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x1C40E2A0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKSENDERROR_OFFSET UNITYSDK_OFFSET(0x1C414390)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKVALIDHOST_OFFSET UNITYSDK_OFFSET(0x1C40E8A0)
#define SYSTEM_NET_HTTPWEBREQUEST_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C40DBB0)
#define SYSTEM_NET_HTTPWEBREQUEST_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C417190)
#define SYSTEM_NET_HTTPWEBREQUEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1C40D670)
#define SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C4115B0)
#define SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C412E20)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C40FD30)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C410CF0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1C411FE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C410EE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x1C413640)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C40FE00)
#define SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C3F9310)
#define SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C40EFB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x1C40FD10)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C40E1F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C40E220)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET UNITYSDK_OFFSET(0x1C40F3A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1C40E240)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C40E540)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C40E5D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C40E6C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C40F380)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x1C410E10)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C40E6E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1C40E6F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C40E2F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1C40E9A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET UNITYSDK_OFFSET(0x1C40E410)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C40EAB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1C40ED00)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET UNITYSDK_OFFSET(0x1C40F3B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C40EF40)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C40EA10)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1C40F0F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C416D60)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1C40F100)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C40F3E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET UNITYSDK_OFFSET(0x1C40F170)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C40F160)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x1C40E680)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C40F180)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C40E520)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C40E530)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1C40F1E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1C40F370)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C40F280)
#define SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET UNITYSDK_OFFSET(0x1C414500)
#define SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET UNITYSDK_OFFSET(0x1C4116A0)
#define SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1C40DB80)
#define SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET UNITYSDK_OFFSET(0x1C4115D0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x1C4148E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x1C413FB0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET UNITYSDK_OFFSET(0x1C40E0D0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_1_OFFSET UNITYSDK_OFFSET(0x1C413F60)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_OFFSET UNITYSDK_OFFSET(0x1C4132E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMINNER_OFFSET UNITYSDK_OFFSET(0x1C413E60)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x1C413D00)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C40E200)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET UNITYSDK_OFFSET(0x1C40E210)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C40E230)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1C40E250)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C40E5C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C40E5E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C40E6A0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x1C40E6B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C40E6D0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C40F390)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x1C410E20)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1C40E770)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C40E670)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1C40E9B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C40E9C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C40EAC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C40ECF0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1C40ED10)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C40EF50)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C40EA20)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C416D70)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1C40F110)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C40F3F0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x1C40E690)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C40F190)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C40F2F0)
#define SYSTEM_NET_HTTPWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C410ED0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAMINNER_B__259_0_OFFSET UNITYSDK_OFFSET(0x1C416FE0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_0_OFFSET UNITYSDK_OFFSET(0x1C416D80)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_1_OFFSET UNITYSDK_OFFSET(0x1C416F10)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_TypeDefinitionIndex = 2857;

	class HttpWebRequest : public ::System::Net::WebRequest
	{
	public:
		::System::Net::IWebProxy* proxy; // 0x38
		::System::Net::CookieContainer* cookieContainer; // 0x40
		::System::Action_1<::System::IO::Stream*>* ResendContentFactory; // 0x48
		::System::String* mediaType; // 0x50
		::System::String* connectionGroup; // 0x58
		::System::Object* locker; // 0x60
		::Il2CppArray<::System::Byte>* bodyBuffer; // 0x68
		::System::Uri* requestUri; // 0x70
		::System::Net::HttpWebResponse* webResponse; // 0x78
		::System::Uri* actualUri; // 0x80
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x88
		::System::Net::ServicePoint* servicePoint; // 0x90
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x98
		::System::Net::HttpWebRequest_AuthorizationState proxy_auth_state; // 0xA0
		::System::Net::WebAsyncResult* asyncRead; // 0xB0
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0xB8
		::System::Net::WebConnection* WebConnection; // 0xC0
		::System::String* method; // 0xC8
		::System::Version* version; // 0xD0
		::System::Net::WebHeaderCollection* webHeaders; // 0xD8
		::System::Exception* saved_exc; // 0xE0
		::System::Net::HttpContinueDelegate* continueDelegate; // 0xE8
		::System::Net::WebConnection* StoredConnection; // 0xF0
		::System::Net::ICredentials* credentials; // 0xF8
		::Mono::Security::Interface::MonoTlsProvider* tlsProvider; // 0x100
		::System::Net::WebConnectionStream* writeStream; // 0x108
		::System::Net::WebAsyncResult* asyncWrite; // 0x110
		::System::Version* actualVersion; // 0x118
		::System::EventHandler* abortHandler; // 0x120
		::System::Net::HttpWebRequest_AuthorizationState auth_state; // 0x128
		::System::String* host; // 0x138
		::System::String* initialMethod; // 0x140
		::System::Int32 redirects; // 0x148
		::System::Int32 bodyBufferLength; // 0x14C
		::System::Int32 maxAutoRedirect; // 0x150
		::System::Boolean _ThrowOnError_k__BackingField; // 0x154
		::System::Boolean gotRequestStream; // 0x155
		::System::Boolean allowBuffering; // 0x156
		::System::Boolean keepAlive; // 0x157
		::System::Boolean haveRequest; // 0x158
		::System::Boolean haveContentLength; // 0x159
		::System::Boolean sendChunked; // 0x15A
		::System::Boolean hostChanged; // 0x15B
		::System::Int32 readWriteTimeout; // 0x15C
		::System::Int32 aborted; // 0x160
		::System::Int32 maxResponseHeadersLength; // 0x164
		::System::Boolean unsafe_auth_blah; // 0x168
		::System::Boolean pipelined; // 0x169
		::System::Boolean allowAutoRedirect; // 0x16A
		::System::Boolean finished_reading; // 0x16B
		::System::Byte _padding0[0x4];
		::System::Int64 contentLength; // 0x170
		::System::Boolean requestSent; // 0x178
		::System::Boolean preAuthenticate; // 0x179
		::System::Boolean usedPreAuth; // 0x17A
		::System::Boolean haveResponse; // 0x17B
		::System::Boolean _ReuseConnection_k__BackingField; // 0x17C
		::System::Boolean expectContinue; // 0x17D
		::System::Boolean getResponseCalled; // 0x17E
		::System::Boolean force_version; // 0x17F
		::System::Int32 timeout; // 0x180
		::System::Net::DecompressionMethods auto_decomp; // 0x184
		static ::System::Int32* StaticGet_defaultMaxResponseHeadersLength()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Net", "HttpWebRequest")->GetStaticField(0x6B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CTOR_2_OFFSET))(this);
		}

		::System::Void ResetAuthorization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET))(this);
		}

		::System::Void SetSpecialHeaders(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET))(this, a1, a2);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET))(this, a1);
		}

		::System::Void set_AllowAutoRedirect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowWriteStreamBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this);
		}

		::System::Void set_AllowWriteStreamBuffering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this, a1);
		}

		::System::Net::DecompressionMethods get_AutomaticDecompression()
		{
			return ((::System::Net::DecompressionMethods(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET))(this);
		}

		::System::Void set_AutomaticDecompression(::System::Net::DecompressionMethods a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DecompressionMethods))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET))(this, a1);
		}

		::System::Boolean get_InternalAllowBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET))(this);
		}

		::System::Boolean get_MethodWithBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_TlsProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, a1);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, a1);
		}

		::System::Void set_InternalContentLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_ThrowOnError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET))(this);
		}

		::System::Void set_ThrowOnError(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET))(this, a1);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Void set_CookieContainer(::System::Net::CookieContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET))(this, a1);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(this, a1);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckValidHost(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKVALIDHOST_OFFSET))(a1, a2);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Void set_KeepAlive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET))(this, a1);
		}

		::System::Void set_MaximumAutomaticRedirections(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET))(this, a1);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadWriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET))(this, a1);
		}

		::System::Void set_PreAuthenticate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, a1);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::System::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET))(this, a1);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Boolean get_SendChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET))(this, a1);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePointNoLock()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET))(this, a1);
		}

		::System::String* get_TransferEncoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, a1);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this);
		}

		::System::Boolean get_ExpectContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET))(this);
		}

		::System::Void set_ExpectContinue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET))(this, a1);
		}

		::System::Uri* get_AuthUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET))(this);
		}

		::System::Boolean get_ProxyQuery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET))(this);
		}

		::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return ((::System::Net::ServerCertValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))(this);
		}

		::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Net::ServicePoint* GetServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET))(this);
		}

		::System::Void AddRange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Void AddRange_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET))(this, a1);
		}

		::System::Void AddRange_2(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, a1, a2);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* a1)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, a1);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Boolean CheckIfForceWrite(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKIFFORCEWRITE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* a1)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(this, a1);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::Boolean get_FinishedReading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_FINISHEDREADING_OFFSET))(this);
		}

		::System::Void set_FinishedReading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET))(this, a1);
		}

		::System::Boolean get_Aborted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void CheckRequestStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET))(this);
		}

		::System::Void DoContinueDelegate(::System::Int32 a1, ::System::Net::WebHeaderCollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET))(this, a1, a2);
		}

		::System::Void RewriteRedirectToGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET))(this);
		}

		::System::Boolean Redirect(::System::Net::WebAsyncResult* a1, ::System::Net::HttpStatusCode a2, ::System::Net::WebResponse* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*, ::System::Net::HttpStatusCode, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetHeaders()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET))(this);
		}

		::System::Void DoPreAuthenticate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET))(this);
		}

		::System::Void SetWriteStreamError(::System::Net::WebExceptionStatus a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetRequestHeaders()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET))(this);
		}

		::System::Void SetWriteStream(::System::Net::WebConnectionStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAM_OFFSET))(this, a1);
		}

		::System::Void SetWriteStreamInner(::System::Net::SimpleAsyncCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMINNER_OFFSET))(this, a1);
		}

		::System::Void SetWriteStreamError_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_1_OFFSET))(this, a1);
		}

		::System::Void SetResponseError(::System::Net::WebExceptionStatus a1, ::System::Exception* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckSendError(::System::Net::WebConnectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKSENDERROR_OFFSET))(this, a1);
		}

		::System::Boolean HandleNtlmAuth(::System::Net::WebAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET))(this, a1);
		}

		::System::Void SetResponseData(::System::Net::WebConnectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* a1, ::System::Net::HttpStatusCode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebResponse*, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckFinalStatus(::System::Net::WebAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_ReuseConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REUSECONNECTION_OFFSET))(this);
		}

		::System::Void set_ReuseConnection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_REUSECONNECTION_OFFSET))(this, a1);
		}

		::System::Void _SetWriteStream_b__258_0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_0_OFFSET))(this, a1);
		}

		::System::Void _SetWriteStream_b__258_1(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_1_OFFSET))(this, a1);
		}

		::System::Boolean _SetWriteStreamInner_b__259_0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAMINNER_B__259_0_OFFSET))(this, a1);
		}

	};
}
