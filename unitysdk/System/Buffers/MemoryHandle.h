#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System::Buffers { class IPinnable; }

#define SYSTEM_BUFFERS_MEMORYHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9723E0)
#define SYSTEM_BUFFERS_MEMORYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x6CFF90)

namespace System::Buffers
{
	inline static constexpr unsigned int MemoryHandle_TypeDefinitionIndex = 6594;

	struct alignas(8) MemoryHandle
	{
		::PVOID _pointer; // 0x10
		::System::Runtime::InteropServices::GCHandle _handle; // 0x18
		::System::Byte _padding0[0x4];
		::System::Buffers::IPinnable* _pinnable; // 0x20

		::System::Void _ctor(::PVOID pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable* pinnable)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Runtime::InteropServices::GCHandle, ::System::Buffers::IPinnable*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYHANDLE__CTOR_OFFSET))(this, pointer, handle, pinnable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYHANDLE_DISPOSE_OFFSET))(this);
		}
	};
}
