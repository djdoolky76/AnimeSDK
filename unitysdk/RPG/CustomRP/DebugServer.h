#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DebugServer_State.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::CustomRP { class DebugServer; }
namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class IRPMsgCb; }
namespace RPG::CustomRP { class MessageThread; }
namespace RPG::CustomRP { class MsgCallback; }
namespace RPG::CustomRP { class ServerBroadcaster; }
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_DEBUGSERVER_ADDDEBUGSERVER_OFFSET UNITYSDK_OFFSET(0x1DDCF210)
#define RPG_CUSTOMRP_DEBUGSERVER_ADD_CLIENTDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DDCF0B0)
#define RPG_CUSTOMRP_DEBUGSERVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1570)
#define RPG_CUSTOMRP_DEBUGSERVER_ENQUEUECB_OFFSET UNITYSDK_OFFSET(0x1DDD04F0)
#define RPG_CUSTOMRP_DEBUGSERVER_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DDD04B0)
#define RPG_CUSTOMRP_DEBUGSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DDCF090)
#define RPG_CUSTOMRP_DEBUGSERVER_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DDCF0A0)
#define RPG_CUSTOMRP_DEBUGSERVER_GET_OFFSET UNITYSDK_OFFSET(0x1DDCF4B0)
#define RPG_CUSTOMRP_DEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1DDD0300)
#define RPG_CUSTOMRP_DEBUGSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DDCFD90)
#define RPG_CUSTOMRP_DEBUGSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DDCFA10)
#define RPG_CUSTOMRP_DEBUGSERVER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DDCF740)
#define RPG_CUSTOMRP_DEBUGSERVER_REMOVE_CLIENTDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DDCF160)
#define RPG_CUSTOMRP_DEBUGSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DDD0060)
#define RPG_CUSTOMRP_DEBUGSERVER__HASLOSTCLIENTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1DDD0E90)
#define RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DDD0CD0)
#define RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTING_OFFSET UNITYSDK_OFFSET(0x1DDD06D0)
#define RPG_CUSTOMRP_DEBUGSERVER__ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DDD1410)
#define RPG_CUSTOMRP_DEBUGSERVER__ONWAITING_OFFSET UNITYSDK_OFFSET(0x1DDD0620)
#define RPG_CUSTOMRP_DEBUGSERVER__SETSTATE_OFFSET UNITYSDK_OFFSET(0x1DDD0560)
#define RPG_CUSTOMRP_DEBUGSERVER__STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x1DDCFBF0)
#define RPG_CUSTOMRP_DEBUGSERVER__STOP_OFFSET UNITYSDK_OFFSET(0x1DDCFF20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugServer_TypeDefinitionIndex = 38849;

	class DebugServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::DebugServer_State _state; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Action*>* _stateDelegates; // 0x20
		::RPG::CustomRP::ServerBroadcaster* _broadcaster; // 0x28
		::System::Net::Sockets::TcpListener* _listener; // 0x30
		::System::Net::Sockets::TcpClient* _client; // 0x38
		::System::IAsyncResult* _currentAsyncResult; // 0x40
		::RPG::CustomRP::MessageThread* _msgThread; // 0x48
		::RPG::CustomRP::MsgCallback* _msgCb; // 0x50
		::Il2CppArray<::System::Collections::Generic::Queue_1<::RPG::CustomRP::IRPMsgCb*>*>* _msgUpdate; // 0x58
		::System::Int32 _UpdateQueueIndex; // 0x60
		::System::Int32 _serverport; // 0x64
		static ::System::Action** StaticGet_ClientDisconnected()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.CustomRP", "DebugServer")->GetStaticField(0x2A270);
		}

		static ::RPG::CustomRP::DebugServer** StaticGet_s_instance()
		{
			return (::RPG::CustomRP::DebugServer**)UnitySDK::FromName("RPG.CustomRP", "DebugServer")->GetStaticField(0x2A278);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_CTOR_OFFSET))(this);
		}

		static ::RPG::CustomRP::DebugServer* get_Instance()
		{
			return ((::RPG::CustomRP::DebugServer*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_GET_ISCONNECTED_OFFSET))(this);
		}

		static ::System::Void add_ClientDisconnected(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ADD_CLIENTDISCONNECTED_OFFSET))(a1);
		}

		static ::System::Void remove_ClientDisconnected(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_REMOVE_CLIENTDISCONNECTED_OFFSET))(a1);
		}

		static ::RPG::CustomRP::MsgCallback* AddDebugServer(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::CustomRP::MsgCallback*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ADDDEBUGSERVER_OFFSET))(a1);
		}

		::RPG::CustomRP::IRPMessage* Get(::System::String* a1)
		{
			return ((::RPG::CustomRP::IRPMessage*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_GET_OFFSET))(this, a1);
		}

		::System::Void Release(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_RELEASE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void EnqueueMessage(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ENQUEUEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void EnqueueCb(::RPG::CustomRP::IRPMsgCb* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMsgCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ENQUEUECB_OFFSET))(this, a1);
		}

		::System::Void _SetState(::RPG::CustomRP::DebugServer_State a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DebugServer_State))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__SETSTATE_OFFSET))(this, a1);
		}

		::System::Void _StartListening()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__STARTLISTENING_OFFSET))(this);
		}

		::System::Void _Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__STOP_OFFSET))(this);
		}

		::System::Void _OnWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONWAITING_OFFSET))(this);
		}

		::System::Void _OnConnecting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTING_OFFSET))(this);
		}

		::System::Void _OnConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTED_OFFSET))(this);
		}

		::System::Boolean _HasLostClientConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__HASLOSTCLIENTCONNECTION_OFFSET))(this);
		}

		::System::Void _OnDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONDISCONNECTED_OFFSET))(this);
		}

	};
}
