#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x97D6F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x97D6B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x1F5F2210)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET UNITYSDK_OFFSET(0x1F5F2200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x97D400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x97D290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET UNITYSDK_OFFSET(0x97D330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x97D540)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x97D3E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x97D5E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET UNITYSDK_OFFSET(0x97D600)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x97D5F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x97D490)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x97D3D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x363D90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET UNITYSDK_OFFSET(0x97D610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F5F21D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F5F20F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F5F21F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F5F21E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x97D420)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x97D2B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET UNITYSDK_OFFSET(0x97D350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x97D560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET UNITYSDK_OFFSET(0x97D4B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97D640)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventPtr_TypeDefinitionIndex = 31985;

	struct alignas(8) InputEventPtr
	{
		::PVOID m_EventPtr; // 0x10

		::System::Void _ctor(::PVOID eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR__CTOR_OFFSET))(this, eventPtr);
		}

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET))(this);
		}

		::System::Boolean get_handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET))(this);
		}

		::System::Void set_handled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET))(this, value);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_sizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_deviceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET))(this, value);
		}

		::System::Double get_internalTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET))(this);
		}

		::System::Void set_internalTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET))(this, value);
		}

		::PVOID get_data()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET))(this);
		}

		::System::UInt32 get_stateSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::UInt32 get_stateOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr Next()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET))(this);
		}

		::PVOID ToPointer()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::InputEventPtr op_Implicit(::PVOID eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET))(eventPtr);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::InputEventPtr From(::PVOID eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET))(eventPtr);
		}
		*/

		/*
		static ::PVOID op_Implicit_1(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::PVOID(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_1_OFFSET))(eventPtr);
		}
		*/

		/*
		static ::PVOID FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::PVOID(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET))(eventPtr);
		}
		*/
	};
}
