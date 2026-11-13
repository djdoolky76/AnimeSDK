#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/IKCPClient.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
namespace MiHoYo::SDK { class IKCPChannel; }
namespace MiHoYo::SDK { class KCPClient; }
namespace MiHoYo::SDK { class KCPClient_OnConnectDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnDisconnetDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnErrorDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnLogDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnTimeoutDelegate; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_1_OFFSET UNITYSDK_OFFSET(0x1E2E71C0)
#define MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_OFFSET UNITYSDK_OFFSET(0x1E2EB120)
#define MIHOYO_SDK_KCPCLIENT_CREATENEWINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E2E7170)
#define MIHOYO_SDK_KCPCLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EAD40)
#define MIHOYO_SDK_KCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2E7FC0)
#define MIHOYO_SDK_KCPCLIENT_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1E2EAFA0)
#define MIHOYO_SDK_KCPCLIENT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E2EAD20)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E2EB030)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECT_OFFSET UNITYSDK_OFFSET(0x1E2EAFB0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1E2EAFF0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALERROR_OFFSET UNITYSDK_OFFSET(0x1E2EB0A0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALLOG_OFFSET UNITYSDK_OFFSET(0x1E2EB0E0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALRECVMSGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E2EB070)
#define MIHOYO_SDK_KCPCLIENT_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1E2EAAF0)
#define MIHOYO_SDK_KCPCLIENT_RECV_OFFSET UNITYSDK_OFFSET(0x1E2EAE60)
#define MIHOYO_SDK_KCPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x1E2E7C30)
#define MIHOYO_SDK_KCPCLIENT_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E2EAD30)
#define MIHOYO_SDK_KCPCLIENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E2E7F00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_TypeDefinitionIndex = 47158;

	class KCPClient : public ::MiHoYo::SDK::IKCPClient
	{
	public:
		::System::Net::Sockets::Socket* socket; // 0x10
		::Il2CppArray<::System::Byte>* cache; // 0x18
		::MiHoYo::SDK::IKCPChannel* channel; // 0x20
		::System::Net::EndPoint* m_ipEndPoint; // 0x28
		static ::MiHoYo::SDK::KCPClient_OnConnectDelegate** StaticGet_OnConnect()
		{
			return (::MiHoYo::SDK::KCPClient_OnConnectDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D010);
		}

		static ::MiHoYo::SDK::KCPClient_OnLogDelegate** StaticGet_OnLog()
		{
			return (::MiHoYo::SDK::KCPClient_OnLogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D018);
		}

		static ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate** StaticGet_OnRecvMsgTimeout()
		{
			return (::MiHoYo::SDK::KCPClient_OnTimeoutDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D020);
		}

		static ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate** StaticGet_OnConnectTimeout()
		{
			return (::MiHoYo::SDK::KCPClient_OnTimeoutDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D028);
		}

		static ::MiHoYo::SDK::KCPClient** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::KCPClient**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D030);
		}

		static ::MiHoYo::SDK::KCPClient_OnDisconnetDelegate** StaticGet_OnDisconnet()
		{
			return (::MiHoYo::SDK::KCPClient_OnDisconnetDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D038);
		}

		static ::MiHoYo::SDK::KCPClient_OnErrorDelegate** StaticGet_OnError()
		{
			return (::MiHoYo::SDK::KCPClient_OnErrorDelegate**)UnitySDK::FromName("MiHoYo.SDK", "KCPClient")->GetStaticField(0x1D040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::KCPClient* get_Instance()
		{
			return ((::MiHoYo::SDK::KCPClient*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::KCPClient* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCPClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_SET_INSTANCE_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::KCPClient* CreateNewInstance()
		{
			return ((::MiHoYo::SDK::KCPClient*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CREATENEWINSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Recv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_RECV_OFFSET))(this);
		}

		::MiHoYo::SDK::IKCPChannel* GetChannel()
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_GETCHANNEL_OFFSET))(this);
		}

		static ::System::Void Output(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_OUTPUT_OFFSET))(a1, a2, a3);
		}

		::System::Void OnInternalConnect(::MiHoYo::SDK::IKCPChannel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECT_OFFSET))(this, a1, a2);
		}

		::System::Void OnInternalDisconnect(::MiHoYo::SDK::IKCPChannel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALDISCONNECT_OFFSET))(this, a1);
		}

		::System::Void OnInternalConnectTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECTTIMEOUT_OFFSET))(this);
		}

		::System::Void OnInternalRecvMsgTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALRECVMSGTIMEOUT_OFFSET))(this);
		}

		::System::Void OnInternalError(::MiHoYo::SDK::KCPErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnInternalLog(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALLOG_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::IKCPChannel* ConnectChannel(::System::Net::IPEndPoint* a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID, ::System::Net::IPEndPoint*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::IKCPChannel* ConnectChannel_1(::System::String* a1, ::System::UInt16 a2, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a3)
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_UPDATE_OFFSET))(this);
		}

		::System::Void Send(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_SEND_OFFSET))(this, a1, a2);
		}

	};
}
