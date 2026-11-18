#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_MessageType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::Networking::PlayerConnection { class IEditorPlayerConnection; }
namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }

#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_BIND_OFFSET UNITYSDK_OFFSET(0x1EEDCB30)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCHANGEUSAGES_OFFSET UNITYSDK_OFFSET(0x1EEDD390)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EEDCE30)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EEDD240)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWDEVICE_OFFSET UNITYSDK_OFFSET(0x1EEDD350)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWEVENTS_OFFSET UNITYSDK_OFFSET(0x1EEDD370)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWLAYOUT_OFFSET UNITYSDK_OFFSET(0x1EEDD360)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONREMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1EEDD380)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTARTSENDING_OFFSET UNITYSDK_OFFSET(0x1EEDD3A0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTOPSENDING_OFFSET UNITYSDK_OFFSET(0x1EEDD3B0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SENDTOSUBSCRIBERS_OFFSET UNITYSDK_OFFSET(0x1EEDD090)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EEDCEC0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EEDD540)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONERROR_OFFSET UNITYSDK_OFFSET(0x1EEDD530)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONNEXT_OFFSET UNITYSDK_OFFSET(0x1EEDD3C0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEDD5B0)
#define UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDD550)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int RemoteInputPlayerConnection_TypeDefinitionIndex = 31731;

	class RemoteInputPlayerConnection : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Guid* StaticGet_kNewEventsMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x8170);
		}
		static ::System::Guid* StaticGet_kNewDeviceMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x8180);
		}
		static ::System::Guid* StaticGet_kRemoveDeviceMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x8190);
		}
		static ::System::Guid* StaticGet_kChangeUsagesMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x81A0);
		}
		static ::System::Guid* StaticGet_kStopSendingMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x81B0);
		}
		static ::System::Guid* StaticGet_kNewLayoutMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x81C0);
		}
		static ::System::Guid* StaticGet_kStartSendingMsg()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(RemoteInputPlayerConnection_TypeDefinitionIndex)->GetStaticField(0x81D0);
		}
		::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* m_Connection; // 0x18
		::Il2CppArray<::System::Object*>* m_Subscribers; // 0x20
		::Il2CppArray<::System::Int32>* m_ConnectedIds; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION__CCTOR_OFFSET))();
		}

		::System::Void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* connection, ::System::Boolean isConnected)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_BIND_OFFSET))(this, connection, isConnected);
		}

		::System::IDisposable* Subscribe(::System::IObserver_1<::System::Object*>* observer)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::IObserver_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SUBSCRIBE_OFFSET))(this, observer);
		}

		::System::Void OnConnected(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCONNECTED_OFFSET))(this, id);
		}

		::System::Void OnDisconnected(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONDISCONNECTED_OFFSET))(this, id);
		}

		::System::Void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWDEVICE_OFFSET))(this, args);
		}

		::System::Void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWLAYOUT_OFFSET))(this, args);
		}

		::System::Void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONNEWEVENTS_OFFSET))(this, args);
		}

		::System::Void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONREMOVEDEVICE_OFFSET))(this, args);
		}

		::System::Void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONCHANGEUSAGES_OFFSET))(this, args);
		}

		::System::Void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTARTSENDING_OFFSET))(this, args);
		}

		::System::Void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_ONSTOPSENDING_OFFSET))(this, args);
		}

		::System::Void SendToSubscribers(::UnityEngine::InputSystem::InputRemoting_MessageType type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputRemoting_MessageType, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SENDTOSUBSCRIBERS_OFFSET))(this, type, args);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONNEXT_OFFSET))(this, msg);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONERROR_OFFSET))(this, error);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_REMOTEINPUTPLAYERCONNECTION_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONCOMPLETED_OFFSET))(this);
		}
	};
}
