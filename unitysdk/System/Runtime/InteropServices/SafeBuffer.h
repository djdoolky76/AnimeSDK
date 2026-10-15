#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"
namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET UNITYSDK_OFFSET(0x1C2CA4B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA3D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_GET_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1C2CA5E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C2CA460)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1C2CA590)

namespace System::Runtime::InteropServices
{
	class SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::UInt64 byte_length; // 0x20
		::System::Boolean inited; // 0x28
		::System::Byte _padding0[0x7];
		::PVOID last_byte; // 0x30
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AcquirePointer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET))(this, a1);
		}

		::System::Void ReleasePointer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET))(this);
		}

		::System::UInt64 get_ByteLength()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_GET_BYTELENGTH_OFFSET))(this);
		}

	};
}
