#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace_Enumerator; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET UNITYSDK_OFFSET(0x1F4EBD10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4EA9B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_FINISHED_OFFSET UNITYSDK_OFFSET(0x1F4EB7F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1F4EA960)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x1F4EA900)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1F4EA920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F4EA940)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1F4EA8F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F4EAFD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONBEGINFRAME_OFFSET UNITYSDK_OFFSET(0x1F4EBAA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1F4EAF30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1F4EAF20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET UNITYSDK_OFFSET(0x1F4EB880)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET UNITYSDK_OFFSET(0x1F4EB6D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET UNITYSDK_OFFSET(0x1F4EB650)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYONEEVENT_OFFSET UNITYSDK_OFFSET(0x1F4EAF40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x1F4EB330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_REWIND_OFFSET UNITYSDK_OFFSET(0x1F4EB630)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_FINISHED_OFFSET UNITYSDK_OFFSET(0x1F4EA910)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1F4EA930)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F4EA950)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET UNITYSDK_OFFSET(0x1F4EAF10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_1_OFFSET UNITYSDK_OFFSET(0x1F4EAE50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET UNITYSDK_OFFSET(0x1F4EADA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E9B90)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_ReplayController_TypeDefinitionIndex = 31990;

	class InputEventTrace_ReplayController : public ::System::Object
	{
	public:
		::System::Action* m_OnFinished; // 0x10
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> m_CreatedDevices; // 0x18
		::System::Byte _padding0[0x10];
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>> m_DeviceIDMappings; // 0x30
		::System::Byte _padding1[0x10];
		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_OnEvent; // 0x48
		::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace; // 0x50
		::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* m_Enumerator; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_AllEventsByTime; // 0x60
		::System::Int32 m_AllEventsByTimeIndex; // 0x68
		::System::Boolean m_CreateNewDevices; // 0x6C
		::System::Boolean _paused_k__BackingField; // 0x6D
		::System::Boolean _finished_k__BackingField; // 0x6E
		::System::Byte _padding2[0x1];
		::System::Double m_StartTimeAsPerRuntime; // 0x70
		::System::Double m_StartTimeAsPerFirstEvent; // 0x78
		::System::Int32 _position_k__BackingField; // 0x80

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER__CTOR_OFFSET))(this, trace);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_TRACE_OFFSET))(this);
		}

		::System::Boolean get_finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_FINISHED_OFFSET))(this);
		}

		::System::Void set_finished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_FINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_paused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_PAUSED_OFFSET))(this);
		}

		::System::Void set_paused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_PAUSED_OFFSET))(this, value);
		}

		::System::Int32 get_position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_POSITION_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* get_createdDevices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* recordedDevice, ::UnityEngine::InputSystem::InputDevice* playbackDevice)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET))(this, recordedDevice, playbackDevice);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo_1(::System::Int32 recordedDeviceId, ::System::Int32 playbackDeviceId)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_1_OFFSET))(this, recordedDeviceId, playbackDeviceId);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithAllDevicesMappedToNewInstances()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnFinished(::System::Action* action)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONFINISHED_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* action)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONEVENT_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayOneEvent()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYONEEVENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* Rewind()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_REWIND_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllFramesOneByOne()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEvents()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEventsAccordingToTimestamps()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET))(this);
		}

		::System::Void OnBeginFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONBEGINFRAME_OFFSET))(this);
		}

		::System::Void Finished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_FINISHED_OFFSET))(this);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_QUEUEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean MoveNext(::System::Boolean skipFrameEvents, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_MOVENEXT_OFFSET))(this, skipFrameEvents, eventPtr);
		}

		::System::Int32 ApplyDeviceMapping(::System::Int32 originalDeviceId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET))(this, originalDeviceId);
		}
	};
}
