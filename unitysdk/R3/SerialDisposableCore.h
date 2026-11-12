#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class IDisposable; }

#define R3_SERIALDISPOSABLECORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E75F00)
#define R3_SERIALDISPOSABLECORE_SET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x3E75EF0)

namespace R3
{
	inline static constexpr unsigned int SerialDisposableCore_TypeDefinitionIndex = 36895;

	struct alignas(8) SerialDisposableCore
	{
		::System::IDisposable* current; // 0x10
		::System::Void set_Disposable(::System::IDisposable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_SET_DISPOSABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSE_OFFSET))(this);
		}

	};
}
