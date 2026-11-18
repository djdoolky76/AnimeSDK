#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SECURITYBUFFERDESCRIPTOR_DEBUGDUMP_OFFSET UNITYSDK_OFFSET(0x1D7C4C30)
#define SYSTEM_NET_SECURITYBUFFERDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4C10)

namespace System::Net
{
	inline static constexpr unsigned int SecurityBufferDescriptor_TypeDefinitionIndex = 3309;

	class SecurityBufferDescriptor : public ::System::Object
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Int32 Count; // 0x14
		::PVOID UnmanagedPointer; // 0x18

		::System::Void _ctor(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFERDESCRIPTOR__CTOR_OFFSET))(this, count);
		}

		::System::Void DebugDump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYBUFFERDESCRIPTOR_DEBUGDUMP_OFFSET))(this);
		}
	};
}
