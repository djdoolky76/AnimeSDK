#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Object; }

#define MONO_RUNTIMECLASSHANDLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define MONO_RUNTIMECLASSHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DEB150)
#define MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET UNITYSDK_OFFSET(0x17AD33A0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x3DEB160)
#define MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x6C8DB0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeClassHandle_TypeDefinitionIndex = 5;

	struct alignas(8) RuntimeClassHandle
	{
		::PVOID value; // 0x10
		::System::Void _ctor(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_CTOR_1_OFFSET))(this, a1);
		}

		::PVOID get_Value()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::IntPtr GetTypeFromClass(::PVOID a1)
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET))(a1);
		}

		::System::RuntimeTypeHandle GetTypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET))(this);
		}

	};
}
