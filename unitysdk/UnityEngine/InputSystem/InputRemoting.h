#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlLayoutChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Flags.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_Message.h"

namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class IObserver_1; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputManager; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_BUILDLAYOUTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F006450)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDLOCALDEVICEID_OFFSET UNITYSDK_OFFSET(0x1F0064F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDORCREATESENDERRECORD_OFFSET UNITYSDK_OFFSET(0x1F0063F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1F006600)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_SENDING_OFFSET UNITYSDK_OFFSET(0x1F004AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_REMOVEREMOTEDEVICES_OFFSET UNITYSDK_OFFSET(0x1F006610)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLDEVICES_OFFSET UNITYSDK_OFFSET(0x1F005A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLGENERATEDLAYOUTS_OFFSET UNITYSDK_OFFSET(0x1F005890)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1F0061C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICE_OFFSET UNITYSDK_OFFSET(0x1F005E20)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1F006100)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDINITIALMESSAGES_OFFSET UNITYSDK_OFFSET(0x1F004D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x1F0062C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1F005C30)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SEND_OFFSET UNITYSDK_OFFSET(0x1F005C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SET_SENDING_OFFSET UNITYSDK_OFFSET(0x1F004AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDING_OFFSET UNITYSDK_OFFSET(0x1F004B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDING_OFFSET UNITYSDK_OFFSET(0x1F004D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1F0057E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F0057D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONERROR_OFFSET UNITYSDK_OFFSET(0x1F0057C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONNEXT_OFFSET UNITYSDK_OFFSET(0x1F004EE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_TRYGETDEVICEBYREMOTEID_OFFSET UNITYSDK_OFFSET(0x1F006570)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F004AE0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_TypeDefinitionIndex = 31710;

	class InputRemoting : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_Subscribers; // 0x10
		::UnityEngine::InputSystem::InputManager* m_LocalManager; // 0x18
		::Il2CppArray<::System::Object*>* m_Senders; // 0x20
		::UnityEngine::InputSystem::InputRemoting_Flags m_Flags; // 0x28

		::System::Void _ctor(::UnityEngine::InputSystem::InputManager* manager, ::System::Boolean startSendingOnConnect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING__CTOR_OFFSET))(this, manager, startSendingOnConnect);
		}

		::System::Boolean get_sending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_SENDING_OFFSET))(this);
		}

		::System::Void set_sending(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SET_SENDING_OFFSET))(this, value);
		}

		::System::Void StartSending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STARTSENDING_OFFSET))(this);
		}

		::System::Void StopSending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_STOPSENDING_OFFSET))(this);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONNEXT_OFFSET))(this, msg);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONERROR_OFFSET))(this, error);
		}

		::System::Void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SYSTEM_IOBSERVER_UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_MESSAGE__ONCOMPLETED_OFFSET))(this);
		}

		::System::IDisposable* Subscribe(::System::IObserver_1<::System::Object*>* observer)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::IObserver_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SUBSCRIBE_OFFSET))(this, observer);
		}

		::System::Void SendInitialMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDINITIALMESSAGES_OFFSET))(this);
		}

		::System::Void SendAllGeneratedLayouts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLGENERATEDLAYOUTS_OFFSET))(this);
		}

		::System::Void SendLayout(::System::String* layoutName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUT_OFFSET))(this, layoutName);
		}

		::System::Void SendAllDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDALLDEVICES_OFFSET))(this);
		}

		::System::Void SendDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICE_OFFSET))(this, device);
		}

		::System::Void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDEVENT_OFFSET))(this, eventPtr, device);
		}

		::System::Void SendDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDDEVICECHANGE_OFFSET))(this, device, change);
		}

		::System::Void SendLayoutChange(::System::String* layout, ::UnityEngine::InputSystem::InputControlLayoutChange change)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SENDLAYOUTCHANGE_OFFSET))(this, layout, change);
		}

		::System::Void Send(::UnityEngine::InputSystem::InputRemoting_Message msg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputRemoting_Message))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_SEND_OFFSET))(this, msg);
		}

		::System::Int32 FindOrCreateSenderRecord(::System::Int32 senderId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDORCREATESENDERRECORD_OFFSET))(this, senderId);
		}

		static ::UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(::System::Int32 senderId)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_BUILDLAYOUTNAMESPACE_OFFSET))(senderId);
		}

		::System::Int32 FindLocalDeviceId(::System::Int32 remoteDeviceId, ::System::Int32 senderIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_FINDLOCALDEVICEID_OFFSET))(this, remoteDeviceId, senderIndex);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(::System::Int32 remoteDeviceId, ::System::Int32 senderIndex)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_TRYGETDEVICEBYREMOTEID_OFFSET))(this, remoteDeviceId, senderIndex);
		}

		::UnityEngine::InputSystem::InputManager* get_manager()
		{
			return ((::UnityEngine::InputSystem::InputManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_GET_MANAGER_OFFSET))(this);
		}

		::System::Void RemoveRemoteDevices(::System::Int32 participantId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_REMOVEREMOTEDEVICES_OFFSET))(this, participantId);
		}
	};
}
