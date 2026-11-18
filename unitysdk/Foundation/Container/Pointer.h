#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_POINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace Foundation::Container
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 8751;

	struct alignas(4) Pointer
	{
		::System::IntPtr _buffer; // 0x10
		::System::Int64 _stride; // 0x18

		::System::Void _ctor(::PVOID buffer, ::System::Int64 stride)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_POINTER__CTOR_OFFSET))(this, buffer, stride);
		}
	};
}
