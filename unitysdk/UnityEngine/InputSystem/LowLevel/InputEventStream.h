#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET UNITYSDK_OFFSET(0x97AF30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x97AEB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x97ADE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x97AD60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x97AD30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x97AD80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x97AD50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x97AD40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET UNITYSDK_OFFSET(0x97B000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x97AF20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x97AD90)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventStream_TypeDefinitionIndex = 31986;

	struct alignas(8) InputEventStream
	{
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer; // 0x10
		::PVOID m_CurrentNativeEventReadPtr; // 0x30
		::PVOID m_CurrentNativeEventWritePtr; // 0x38
		::System::Int32 m_RemainingNativeEventCount; // 0x40
		::System::Int32 m_MaxAppendedEvents; // 0x44
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer; // 0x48
		::PVOID m_CurrentAppendEventReadPtr; // 0x68
		::PVOID m_CurrentAppendEventWritePtr; // 0x70
		::System::Int32 m_RemainingAppendEventCount; // 0x78
		::System::Int32 m_NumEventsRetainedInBuffer; // 0x7C
		::System::Boolean m_IsOpen; // 0x80

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer, ::System::Int32 maxAppendedEvents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM__CTOR_OFFSET))(this, eventBuffer, maxAppendedEvents);
		}

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET))(this);
		}

		::System::Int32 get_remainingEventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_numEventsRetainedInBuffer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET))(this);
		}

		::PVOID get_currentEventPtr()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET))(this);
		}

		::System::UInt32 get_numBytesRetainedInBuffer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET))(this);
		}

		::System::Void Close(::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET))(this, eventBuffer);
		}

		::System::Void CleanUpAfterException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET))(this);
		}

		::System::Void Write(::PVOID eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET))(this, eventPtr);
		}

		::PVOID Advance(::System::Boolean leaveEventInBuffer)
		{
			return ((::PVOID(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET))(this, leaveEventInBuffer);
		}

		::PVOID Peek()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET))(this);
		}
	};
}
