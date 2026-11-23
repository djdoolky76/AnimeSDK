#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"

namespace B2F70F41B9C3250D { template <typename T> class E920FFB05DF4D3B5; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }
namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_ConnectionChangeEvent; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET UNITYSDK_OFFSET(0x41853B0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET UNITYSDK_OFFSET(0x4185640)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x41859F0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x4185B30)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_TypeDefinitionIndex = 17689;

	class PlayerEditorConnectionEvents : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* messageTypeSubscribers; // 0x10
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* connectionEvent; // 0x18
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* disconnectionEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void InvokeMessageIdSubscribers(::System::Guid B5EC6E6D9668FDBE, ::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 F8F262978B4E3B1A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET))(this, B5EC6E6D9668FDBE, F220A2D27F7C6B6C, F8F262978B4E3B1A);
		}

		::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(::System::Guid B5EC6E6D9668FDBE)
		{
			return ((::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET))(this, B5EC6E6D9668FDBE);
		}

		::System::Void UnregisterManagedCallback(::System::Guid B5EC6E6D9668FDBE, ::B2F70F41B9C3250D::E920FFB05DF4D3B5<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::B2F70F41B9C3250D::E920FFB05DF4D3B5<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET))(this, B5EC6E6D9668FDBE, E04D2BE64FCE9814);
		}
	};
}
