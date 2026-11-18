#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET UNITYSDK_OFFSET(0x919CC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET UNITYSDK_OFFSET(0x919C60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET UNITYSDK_OFFSET(0x919BB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET UNITYSDK_OFFSET(0x919E10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x919C70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x919DC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x919D60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET UNITYSDK_OFFSET(0x919B60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x358710)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x374A70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x919CA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x919D60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x919EB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x919B80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x919B70)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventBuffer_TypeDefinitionIndex = 31980;

	struct alignas(8) InputEventBuffer
	{
		// static const ::System::Int64 BufferSizeUnknown = -0x1; // 0x0
		::Unity::Collections::NativeArray_1<::System::Byte> m_Buffer; // 0x10
		::System::Byte _padding0[0x8];
		::System::Int64 m_SizeInBytes; // 0x20
		::System::Int32 m_EventCount; // 0x28
		::System::Boolean m_WeOwnTheBuffer; // 0x2C

		::System::Void _ctor(::PVOID eventPtr, ::System::Int32 eventCount, ::System::Int32 sizeInBytes, ::System::Int32 capacityInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_OFFSET))(this, eventPtr, eventCount, sizeInBytes, capacityInBytes);
		}

		::System::Void _ctor_1(::Unity::Collections::NativeArray_1<::System::Byte> buffer, ::System::Int32 eventCount, ::System::Int32 sizeInBytes, ::System::Boolean transferNativeArrayOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_1_OFFSET))(this, buffer, eventCount, sizeInBytes, transferNativeArrayOwnership);
		}

		::System::Int32 get_eventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET))(this);
		}

		::System::Int64 get_sizeInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Int64 get_capacityInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Byte> get_data()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET))(this);
		}

		::System::Void AppendEvent(::PVOID eventPtr, ::System::Int32 capacityIncrementInBytes, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET))(this, eventPtr, capacityIncrementInBytes, allocator);
		}

		::PVOID AllocateEvent(::System::Int32 sizeInBytes, ::System::Int32 capacityIncrementInBytes, ::Unity::Collections::Allocator allocator)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET))(this, sizeInBytes, capacityIncrementInBytes, allocator);
		}

		::System::Boolean Contains(::PVOID eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET))(this, eventPtr);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET))(this);
		}

		::System::Void AdvanceToNextEvent(::PVOID& currentReadPos, ::PVOID& currentWritePos, ::System::Int32& numEventsRetainedInBuffer, ::System::Int32& numRemainingEvents, ::System::Boolean leaveEventInBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID&, ::PVOID&, ::System::Int32&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET))(this, currentReadPos, currentWritePos, numEventsRetainedInBuffer, numRemainingEvents, leaveEventInBuffer);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET))(this);
		}
		*/

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}
	};
}
