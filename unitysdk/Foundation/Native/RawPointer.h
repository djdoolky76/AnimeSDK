#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NATIVE_RAWPOINTER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3D5D40)
#define FOUNDATION_NATIVE_RAWPOINTER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define FOUNDATION_NATIVE_RAWPOINTER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x282350)
#define FOUNDATION_NATIVE_RAWPOINTER_SETNULL_OFFSET UNITYSDK_OFFSET(0x3DDF60)
#define FOUNDATION_NATIVE_RAWPOINTER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace Foundation::Native
{
	inline static constexpr unsigned int RawPointer_TypeDefinitionIndex = 9106;

	struct alignas(4) RawPointer
	{
		::System::IntPtr _pointer; // 0x10

		/*
		::System::Boolean Equals(::Foundation::Native::RawPointer other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Void SetNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_SETNULL_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_GET_ISNULL_OFFSET))(this);
		}

		::PVOID get_Value()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::PVOID value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVE_RAWPOINTER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
